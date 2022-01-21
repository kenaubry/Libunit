/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_strcpy_test_ko.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:37:31 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:37:34 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_strcpy_tests.h"

int	basic_strcpy_test_ko(void)
{
	char	s1[10];
	char	*s2;

	ft_memset(s1, 42, 10);
	s2 = "Hello World!";
	if (ft_strequ(ft_strcpy(s1, s2), "Hello World!"))
		return (0);
	else
		return (1);
}
