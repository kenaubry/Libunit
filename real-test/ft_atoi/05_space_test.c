/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:50:13 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:50:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int	space_test(void)
{
	if (ft_atoi("   123") == 123)
		return (0);
	else
		return (-1);
}
