/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenaubry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:08:23 by kenaubry          #+#    #+#             */
/*   Updated: 2022/01/09 23:08:25 by kenaubry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLCAT_H
# define STRLCAT_H
# include "../../framework/libunit.h"
# include "../../framework/utils/includes/libft.h"
# include <string.h>
# include <stddef.h>

int		strlcat_launcher(void);
int		strlcat_ok(void);
int		strlcat_sigbus(void);
int		strlcat_sigsev(void);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
