/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:02:47 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:02:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if ((s1 && s2) && (ft_strlen(s1)) == (ft_strlen(s2)))
	{
		if (!(ft_memcmp((void *)s1, (void *)s2, ft_strlen(s1) + 1)))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
