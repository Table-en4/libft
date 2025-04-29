/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:48:49 by molapoug          #+#    #+#             */
/*   Updated: 2025/03/07 16:28:08 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(char *dest, char *src, int c, int n)
{
	int	i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (0);
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == c)
	{
		dest[i] = src[i];
		return (dest + i + 1);
	}
	return (0);
}
