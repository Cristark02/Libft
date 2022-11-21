/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:14:55 by mmita             #+#    #+#             */
/*   Updated: 2022/11/21 15:43:53 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len(long nl)
{
	int	l;

	l = 0;
	if (nl == 0)
		l = 1;
	else if (nl < 0)
	{
		nl = -nl;
		l++;
	}
	while (nl > 0)
	{
		nl = nl / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nl;

	nl = n;
	i = len(nl);
	str = (char *)malloc (sizeof(char) * (len(nl) + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nl == 0)
		str[0] = '0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = -nl;
	}
	while (nl > 0)
	{
		str[i--] = 48 + (nl % 10);
		nl = nl / 10;
	}
	return (str);
}
