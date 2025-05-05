/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:08:09 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/30 18:06:01 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int ch, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n > 0)
	{
		*src = (unsigned char)ch;
		src++;
		n--;
	}
	return (s);
}
