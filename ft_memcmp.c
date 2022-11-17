/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:29:22 by mmita             #+#    #+#             */
/*   Updated: 2022/11/17 16:56:15 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		if (*(unsigned char *)s1 < *(unsigned char *)s2)
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		s1++;
		s2++;
		i++;
	}
	return (0);
}
