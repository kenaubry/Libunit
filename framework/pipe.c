/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:15:52 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:16:00 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
	copy the stdout fd into a variable, then use the (int *)pipefd to
	store the writing entry into the pipe;
*/

int	stdout_to_pipe(int *fd_pipe)
{
	int		stdout_copy;

	stdout_copy = dup(STDOUT_FILENO);
	pipe(fd_pipe);
	dup2(fd_pipe[1], STDOUT_FILENO);
	close(fd_pipe[1]);
	return (stdout_copy);
}

char	*get_pipe_buffer(int stdout_copy, int *fd_pipe, char *buff, size_t size)
{
	int		ret;

	ret = read(fd_pipe[0], buff, size);
	if (ret != -1)
		buff[ret] = '\0';
	dup2(stdout_copy, STDOUT_FILENO);
	close(fd_pipe[0]);
	return (buff);
}
