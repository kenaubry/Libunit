/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:30:00 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 14:02:36 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/utils/includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	size;
	size_t	count;

	size = ft_strlen(src);
	count = 0;
	while (count < size)
	{
		dst[count] = src[count];
		count++;
	}
	return (dst);
}
