/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:47:18 by jthierce          #+#    #+#             */
/*   Updated: 2018/11/19 18:15:23 by jthierce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_int_in_str_itoa(int n, char *str, int puis, int neg)
{
	int		i;

	i = 0;
	if (neg == -1)
	{
		str[i] = '-';
		i++;
	}
	while (puis != 0)
	{
		str[i] = (n / puis) + 48;
		n = n % puis;
		if (puis == 1)
			puis = 0;
		puis /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;
	int		puis;
	char	*str;
	int		i;
	int		neg;

	neg = 1;
	i = 0;
	puis = 1;
	length = 1;
	if (n < 0)
	{
		n *= -1;
		neg = -1;
		length++;
	}
	while ((puis * 10) <= n)
	{
		length++;
		puis *= 10;
	}
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	str = ft_int_in_str_itoa(n, str, puis, neg);
	return (str);
}
