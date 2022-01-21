/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:54:45 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 14:24:31 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

# include "../../framework/libunit.h"

int	ft_atoi(const char *str);
int	ft_atoi_launcher(void);
int	basic_atoi_test(void);
int	zero_test(void);
int	negative_test(void);
int	plus_sign_test(void);
int	space_test(void);
int	space_plus_test(void);
int	space_negative_test(void);
int	word_after_test(void);
int	zero_before_num_test(void);
int	zero_before_neg_num_test(void);
int	multiple_zero_test(void);

#endif
