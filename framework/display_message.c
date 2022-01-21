/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_message.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:49:56 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 21:50:37 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	display_message(int grade, int total_point)
{
	ft_putstr_fd("\n", 1);
	ft_putnbr_fd(grade, 1);
	ft_putstr_fd("/", 1);
	ft_putnbr_fd(total_point, 1);
	ft_putstr_fd(" tests checked\n", 1);
}
