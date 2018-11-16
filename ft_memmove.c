/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:26:09 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/09 20:28:48 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	i = 0;
	tab1 = (unsigned char *)src;
	tab2 = (unsigned char *)dest;
	while (i != n)
	{
		if (tab1[i] != tab2[i])
			tab2[i] = tab1[i];
		i++;
	}
	return (dest);
}
