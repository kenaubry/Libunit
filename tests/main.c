/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:45:37 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:52:55 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "./ft_atoi/ft_atoi.h"
#include "./strcpy/basic_strcpy_tests.h"
#include "./ft_strlen/ft_strlen.h"
#include "./ft_strjoin/ft_strjoin.h"

int	main(void)
{
	ft_atoi_launcher();
	ft_strlen_launcher();
	ft_strjoin_launcher();
	basic_strcpy_launcher();
	return (0);
}
