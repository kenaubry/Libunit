/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:04:35 by esafar            #+#    #+#             */
/*   Updated: 2022/01/09 22:04:36 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <locale.h>
# include <inttypes.h>
# include <wchar.h>

# define BUFF_SIZE 15

typedef struct s_str
{
	char			*addr;
	size_t			len;
}					t_str;

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct s_buffer
{
	int				fildes;
	char			buf[BUFF_SIZE + 1];
}					t_buffer;

typedef struct s_wslen
{
	ssize_t			count;
	ssize_t			bytes;
}					t_wslen;

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strcmp(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *src);

#endif
