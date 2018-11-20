/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:29:48 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/20 17:35:07 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
int				ft_atoi(const char *nptr);
size_t			ft_strlen(const char *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strncpy(char *dest, const char *src, size_t n);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void(*del)(void *, size_t));

#endif
