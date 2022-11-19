/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:23:03 by mmita             #+#    #+#             */
/*   Updated: 2022/11/19 15:37:26 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*src;

	i = 0;
	if (start >= ft_strlen(s))
	{
		src = (char *)malloc(sizeof(*s));
		*src = 0;
		return (src);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	src = (char *)malloc(sizeof(*s) * (len + 1));
	if (!src)
		return (NULL);
	while (s[start + i] && i < len)
	{
		src[i] = s[start + i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
