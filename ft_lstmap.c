/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:33:04 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/20 19:40:18 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*cpy;

	while (lst != NULL)
	{
		cpy = f(lst);
		lst = lst->next;
		cpy = cpy->next;
	}
}
