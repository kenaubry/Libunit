/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:12:37 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:13:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static char	*read_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return ("\033[32mOK\033[0m");
		else if (WEXITSTATUS(status) == SIGALRM)
			return ("\033[31mTIMEOUT\033[0m");
	}
	else
	{
		if (WTERMSIG(status) == SIGSEGV)
			return ("\033[31mSIGV\033[0m");
		else if (WTERMSIG(status) == SIGBUS)
			return ("\033[31mBUSE\033[0m");
	}
	return ("\033[31mKO\033[0m");
}

static void	kill_child(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

static void	child_process(t_test **tests)
{
	signal(SIGALRM, kill_child);
	alarm(TIMEOUT_SECONDS);
	if (((*tests)->test)() == 0)
		exit(0);
	else
		exit(1);
}

/*
	parent_process wait for the child process to finish,
	and when WIFEXISTED(status) return "true" AND
	WEXITSTATUS(status) return 0, that means that the child process
	quit using exit signal, with the good exit code (0);
*/

static void	parent_process(char *name, int *grade)
{
	int	status;

	status = 0;
	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		*grade += 1;
	write(1, name, ft_strlen(name));
	ft_putstr_fd(" : [", 1);
	write(1, read_status(status), ft_strlen(read_status(status)));
	ft_putstr_fd("]\n", 1);
}

/*
        after loading all tests in a chained list, launch_test
		function is called, executing the tests. in order to test
		correctly everything, including segfaults and buserror,
		tests are executed in a child process. thereby, the default
		process will continue running until the completing all tests.
*/

int	launch_tests(t_test **tests)
{
	int		grade;
	int		total_point;
	pid_t	pid;

	grade = 0;
	total_point = 0;
	while (*tests)
	{
		pid = fork();
		if (pid < 0)
			return (-1);
		else if (pid == 0)
			child_process(tests);
		else if (pid > 0)
			parent_process((*tests)->name, &grade);
		*tests = (*tests)->next;
		total_point++;
	}
	display_message(grade, total_point);
	if (grade == total_point)
		return (0);
	else
		return (-1);
}
