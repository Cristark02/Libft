/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:40:31 by mmita             #+#    #+#             */
/*   Updated: 2022/11/21 15:52:56 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_count_word(const char *str, char c)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	while (str[i] != '\0')
	{
		if (str[i++] != c && (str[i] == c || str[i] == '\0'))
			trigger++;
	}
	return (trigger);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	n;
	char	**split;

	split = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			split[n++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	split[n] = 0;
	return (split);
}
