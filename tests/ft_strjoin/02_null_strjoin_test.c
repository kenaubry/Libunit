/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_strjoin_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:53:27 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:53:28 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin.h"

int	null_strjoin_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = NULL;
	s2 = "kenza";
	s3 = ft_strjoin(s1, s2);
	if (ft_strcmp(s3, "kenza") == 0)
	{
		free(s3);
		return (0);
	}
	else
	{
		free(s3);
		return (-1);
	}
}
