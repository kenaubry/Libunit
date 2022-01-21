/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strjoin_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:53:01 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:53:02 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin.h"

int	ft_strjoin_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_strjoin :\n", 1);
	load_test(&lst, "basic_strjoin_test", &basic_strjoin_test);
	load_test(&lst, "null_test", &null_strjoin_test);
	load_test(&lst, "longstr_test", &longstr_strjoin_test);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
