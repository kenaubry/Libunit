/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:44:24 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:44:25 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLEN_H
# define FT_STRLEN_H

# include "../../framework/libunit.h"

size_t	ft_strlen(const char *str);
int		ft_strlen_launcher(void);
int		basic_strlen_test(void);
int		null_test(void);
int		longstr_test(void);

#endif
