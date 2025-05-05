/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:06:36 by molapoug          #+#    #+#             */
/*   Updated: 2025/05/01 19:11:09 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int	i;
	int	count;
	int	trigger;

	i = -1;
	count = 0;
	trigger = 0;
	while (str[++i])
	{
		if (str[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (str[i] == c)
			trigger = 0;
	}
	return (count);
}

static char	*word_dup(char const *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	return (word[i] = '\0', word);
}

static void	ft_free_split(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

static char	**process_splits(char const *s, char c, char **result, int i)
{
	int	j;
	int	start;

	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = word_dup(s, start, i);
			if (!result[j])
				return (ft_free_split(result, j - 1), NULL);
			j++;
		}
		else
			i++;
	}
	return (result[j] = NULL, result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	return (process_splits(s, c, result, 0));
}
