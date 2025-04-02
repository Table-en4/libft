/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <mohapouge@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:49:29 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/02 16:43:36 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	i = 0;
	str = (unsigned char *)arr;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
