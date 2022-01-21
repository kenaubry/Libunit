/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_strcpy_tests.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:40:05 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 15:44:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_STRCPY_TESTS_H
# define BASIC_STRCPY_TESTS_H

# include "../../framework/libunit.h"
# include "../../framework/utils/includes/libft.h"
# include <string.h>

int		basic_strcpy_launcher(void);
int		basic_strcpy_test_ok(void);
int		basic_strcpy_test_ko(void);
int		basic_strcpy_test_segv(void);
int		basic_strcpy_test_buse(void);

//char	*test_strcpy(char *dst, const char *src);
char	*ft_strcpy(char *dest, const char *src);

#endif
