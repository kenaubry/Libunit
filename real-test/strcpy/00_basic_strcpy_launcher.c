/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_basic_strcpy_launcher.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:36:42 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:36:45 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_strcpy_tests.h"

int	basic_strcpy_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_strcpy:\n", 1);
	load_test(&lst, "basic_strcpy_test_ok", &basic_strcpy_test_ok);
	load_test(&lst, "basic_strcpy_test_ko", &basic_strcpy_test_ko);
	load_test(&lst, "basic_strcpy_test_segv", &basic_strcpy_test_segv);
	load_test(&lst, "basic_strcpy_test_buse", &basic_strcpy_test_buse);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
