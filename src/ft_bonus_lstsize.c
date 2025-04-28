/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus_lstsize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:59:48 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/28 16:46:22 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;

    len = 0;
    if (!lst)
        return(len);
    while (lst -> next)
    {
        lst = lst->next;
        len++;
    }
    return(len + 1);
}
