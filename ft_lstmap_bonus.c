/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:38:30 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/30 18:05:24 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_node(t_list *lst, void *(*f)(void *),
					void (*del)(void *))
{
	void	*content;
	t_list	*node;

	content = f(lst->content);
	if (!content)
		return (del(content), NULL);
	node = ft_lstnew(content);
	if (!node)
		return (del(content), NULL);
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
				void (*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	start = create_node(lst, f, del);
	if (!start)
		return (NULL);
	current = start;
	while (lst && lst->next)
	{
		current->next = create_node(lst->next, f, del);
		if (!current->next)
			return (ft_lstclear(&start, del), NULL);
		current = current->next;
		lst = lst->next;
	}
	return (start);
}
