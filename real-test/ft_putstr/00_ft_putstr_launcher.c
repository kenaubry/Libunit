/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_putstr_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:22:01 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:20:15 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"

int	ft_putstr_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_putstr:\n", 1);
	load_test(&lst, "basic_putstr_test", &basic_putstr_test);
	ret = launch_tests(&lst);
	ft_putstr_fd("====================>\n", 1);
	clean_list(&lst);
	return (ret);
}
