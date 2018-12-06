/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddeof.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <jthierce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:36:29 by marvin            #+#    #+#             */
/*   Updated: 2018/11/29 15:21:32 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddeof(t_list **alst, t_list *new)
{
	if (alst != NULL && new != NULL)
	{
		while (*alst != NULL)
		{
			*alst = (*alst)->next;
		}
		*alst = new;
		new->next = NULL;
	}
}
