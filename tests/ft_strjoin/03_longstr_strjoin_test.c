/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_longstr_strjoin_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:53:42 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:53:43 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin.h"

int	longstr_strjoin_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "salut aujourd'hui on ";
	s2 = "fait rien";
	s3 = ft_strjoin(s1, s2);
	if (ft_strcmp(s3, "salut aujourd'hui on fait rien") == 0)
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
