/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:11:19 by mmita             #+#    #+#             */
/*   Updated: 2022/11/30 15:39:05 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, aux);
		lst = lst -> next;
	}
	return (new);
}
