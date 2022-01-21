/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcat_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:05:09 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 23:05:10 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlcat.h"

int	strlcat_launcher(void)
{
	int		ret;
	t_test	*lst;

	lst = NULL;
	ft_putstr_fd("ft_strlcat:\n", 1);
	load_test(&lst, "strlcat_ok", &strlcat_ok);
	load_test(&lst, "strlcat_sigsev", &strlcat_sigsev);
	load_test(&lst, "strlcat_sigbus", &strlcat_sigbus);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
