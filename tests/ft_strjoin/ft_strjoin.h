/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:54:02 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 21:54:03 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRJOIN_H
# define FT_STRJOIN_H

# include "../../framework/libunit.h"

char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strjoin_launcher(void);
int		basic_strjoin_test(void);
int		null_strjoin_test(void);
int		longstr_strjoin_test(void);

#endif
