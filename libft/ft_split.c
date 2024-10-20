/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:18:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 11:17:21 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (count);
}

static size_t	sizesub(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	count;
	size_t	start;

	i = 0;
	word = 0;
	count = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**sub;

	words = count_words(s, c);
	sub = (char **)malloc(sizeof(char *) * words);
	while (i < n)
	{
		free(sub[i]);
		i++;
	}
	free(sub);
}
