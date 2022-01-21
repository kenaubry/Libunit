/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_strcpy_test_segv.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:38:00 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:38:04 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_strcpy_tests.h"

int	basic_strcpy_test_segv(void)
{
	char	*s1;
	char	*s2;

	s1 = NULL;
	s2 = "Hello World!";
	if (ft_strcpy(s1, s2))
		return (0);
	else
		return (-1);
}
