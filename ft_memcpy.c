/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:15:22 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/14 15:41:37 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *dest, char *src, int size)
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
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
