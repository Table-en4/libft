/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:30:05 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/18 11:04:17 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (0);
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
