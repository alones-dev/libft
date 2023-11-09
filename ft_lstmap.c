/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:04:05 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 08:55:10 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *act;

	new = malloc(sizeof(t_list));
	act = lst;
	while (act)
	{
		new = (*f)(act->content);
		new = new->next;
		act = act->next;
		if (del)
			ft_lstdelone(new, del);
	}
	return (new);
}