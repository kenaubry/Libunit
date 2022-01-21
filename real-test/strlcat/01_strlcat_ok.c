/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcat_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:05:14 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 23:39:31 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlcat.h"
#include "../../framework/utils/includes/libft.h"

int	strlcat_ok(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("salut");
	s2 = ft_strdup(" kenza");
	if (ft_strlcat(s1, s2, 11) == 11)
	{
		free(s1);
		free(s2);
		return (0);
	}
	else
	{
		free(s1);
		free(s2);
		return (-1);
	}
}
