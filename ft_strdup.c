/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:42:50 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/12 19:01:00 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	dest = (char *)malloc(sizeof(char) * 1 + 1);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
