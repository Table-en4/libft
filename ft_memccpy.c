/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:48:49 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/18 13:02:31 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(char *dest, char *src, int ch, int size)
{
	int	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (0);
	while (i < size && src[i] != ch)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size && src[i] == ch)
	{
		dest[i] = src[i];
		return (dest + i + 1);
	}
	return (0);
}
