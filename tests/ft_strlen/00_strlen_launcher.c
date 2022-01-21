/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:42:24 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:42:25 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"

int	ft_strlen_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_strlen :\n", 1);
	load_test(&lst, "basic_strlen_test", &basic_strlen_test);
	load_test(&lst, "null_test", &null_test);
	load_test(&lst, "longstr_test", &longstr_test);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
