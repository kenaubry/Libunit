/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:40:31 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:40:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "./strcpy/basic_strcpy_tests.h"
#include "./strlcat/strlcat.h"
#include "./ft_atoi/ft_atoi.h"
#include "./ft_putstr/ft_putstr.h"

int	main(void)
{
	basic_strcpy_launcher();
	strlcat_launcher();
	ft_atoi_launcher();
	ft_putstr_launcher();
	return (0);
}
