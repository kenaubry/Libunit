/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_atoi_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:47:11 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 14:23:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	ft_atoi_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_atoi:\n", 1);
	load_test(&lst, "basic_atoi_test", &basic_atoi_test);
	load_test(&lst, "zero_test", &zero_test);
	load_test(&lst, "negative_test", &negative_test);
	load_test(&lst, "plus_sign_test", &plus_sign_test);
	load_test(&lst, "space_test", &space_test);
	load_test(&lst, "space_plus_test", &space_plus_test);
	load_test(&lst, "space_negative_test", &space_negative_test);
	load_test(&lst, "word_after_test", &word_after_test);
	load_test(&lst, "zero_before_num_test", &zero_before_num_test);
	load_test(&lst, "zero_before_neg_num_test", &zero_before_neg_num_test);
	load_test(&lst, "multiple_zero_test", &multiple_zero_test);
	ret = launch_tests(&lst);
	ft_putstr_fd("====================>\n", 1);
	clean_list(&lst);
	return (ret);
}
