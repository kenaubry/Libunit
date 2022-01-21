/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:01:37 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:01:41 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*bs1;
	unsigned char	*bs2;

	if (!(s1 || s2))
		return (0);
	else
	{
		count = 0;
		bs1 = (unsigned char *)s1;
		bs2 = (unsigned char *)s2;
		while ((count < n) && (bs1[count] == bs2[count]))
			count++;
		if (count == n)
			return (0);
		else
			return ((int)(bs1[count] - bs2[count]));
	}
}
