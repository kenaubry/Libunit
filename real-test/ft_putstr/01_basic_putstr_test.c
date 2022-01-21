/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_putstr_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:27:23 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 19:27:26 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"

int	basic_putstr_test(void)
{
	int		stdout_copy;
	int		fd_pipe[2];
	char	buff[100];

	stdout_copy = stdout_to_pipe(fd_pipe);
	ft_putstr("abc");
	get_pipe_buffer(stdout_copy, fd_pipe, buff, 100);
	if (ft_strcmp(buff, "abc") == 0)
		return (0);
	else
		return (-1);
}
