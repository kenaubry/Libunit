/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:01:46 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:01:50 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	unsigned char	*bcast;
	size_t			count;

	count = 0;
	bcast = (unsigned char *)b;
	val = (unsigned char)c;
	while (count < len)
	{
		bcast[count] = val;
		count++;
	}
	return (b);
}
