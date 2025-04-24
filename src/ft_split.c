/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:06:36 by molapoug          #+#    #+#             */
/*   Updated: 2025/04/24 19:53:47 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_word(char *str, char c)
{
	int	i;
	int	j;
	int	trigger;

	i = 0;
	j = 0;
	trigger = 0;
	while (str[j])
	{
		if (str[j] != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (i);
}

int	word_dup(char *str)
{
	int	i;
	char	*dst;

	i = 0;
	if (str == 0)
		return (0);
	dst = malloc(sizeof *dst *(ft_strlen(str) + 1));
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (*dst);
}

char	**ft_split(char const *s, char c)
{
	return (0);
}

