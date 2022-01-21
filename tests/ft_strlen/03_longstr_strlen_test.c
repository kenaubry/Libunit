/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_longstr_strlen_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:43:09 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:43:12 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"

int	longstr_test(void)
{
	if (ft_strlen("kenzakenzakenzakenzakenzakenzakenzakenzakenzakenza") == 50)
		return (0);
	else
		return (-1);
}
