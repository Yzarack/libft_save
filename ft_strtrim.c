/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:50:01 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/17 12:44:52 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static	char	*ft_malloc_no_space(char const *s)
{
	size_t i;
	size_t j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i + j])
	{
		if (s[i + j] != ' ' && s[i + j] != ',' 
			&& s[i + j] != '\n' && s[i + j] != '\t')
			i++;
		else
			j++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = ft_malloc_no_space(s);
	while (s[i + j])
	{
		if (s[i + j] != ' ' && s[i + j] != ',' 
			&& s[i + j] != '\n' && s[i + j] != '\t')
		{
			str[i] = s[i +j];
			i++;
		}
		else
			j++;
	}
	if (str[i] == NULL)
		str[i] = '\0';
	else
		str[i + 1] = '\0';
	return (str);
}
