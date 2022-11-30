/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:19:59 by mmita             #+#    #+#             */
/*   Updated: 2022/11/30 15:09:02 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (!lst)
		return ;
	while (*lst)
	{
		i = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = i;
	}
	*lst = 0;
}
