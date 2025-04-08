/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <mohapouge@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:20:55 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/08 12:49:43 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ptr;

	if (elementCount == 0 || elementSize == 0)
		return (malloc(0));
	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, elementCount * elementSize);
	return (ptr);
}
