/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:33:04 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/20 19:33:17 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cpy;

	while (lst != NULL)
	{
		if (!(cpy = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		f();
	}
}
