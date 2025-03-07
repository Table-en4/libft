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

	i = size;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
