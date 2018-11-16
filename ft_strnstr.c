/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:44:13 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/13 15:40:01 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t len)
{
	size_t i;
	size_t j;
	size_t save;

	j = 0;
	i = 0;
	while (meule_de_foin[i] && i < len)
	{
		save = i;
		while (meule_de_foin[i] == aiguille[j] && i < len)
		{
			i++;
			j++;
			if (aiguille[j] == '\0')
				return ((char *)(meule_de_foin + save));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
