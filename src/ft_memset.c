/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:08:09 by molapoug          #+#    #+#             */
/*   Updated: 2025/03/07 15:37:24 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)str;
	while (n > 0)
	{
		*src = (unsigned char)ch;
		src++;
		n--;
	}
	return (str);
}
