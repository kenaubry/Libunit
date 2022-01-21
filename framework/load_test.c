/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:13:11 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 13:13:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
        new_test function malloc a t_test sized node,
		and is initiated with datas of the test concerned;
*/

t_test	*new_test(char *name, int (*test)(void))
{
	t_test	*list;

	list = (t_test *)malloc(sizeof(t_test));
	if (!list)
		return (NULL);
	list->name = name;
	list->test = test;
	list->next = NULL;
	return (list);
}

/*
        load_test function creates a chained list of all
		tests to do (ft_atoi tests for example), where
		every node stores the test name,the funtion
		address to refer to, and a pointer to the next node;
*/

void	load_test(t_test **testlist, char *name, int (*test)(void))
{
	t_test	*tmp;

	if (*testlist == NULL)
		*testlist = new_test(name, test);
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_test(name, test);
	}
}
