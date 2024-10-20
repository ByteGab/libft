/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:18:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 11:42:49 by gafreire         ###   ########.fr       */
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

static size_t	size_sub(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
		}
		else if (count > 0)
		{
			break ;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**sub;
	size_t	i;
	size_t	j;
	size_t	size_word;
	size_t	k;

	words = count_words(s, c);
	sub = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	j = 0;
	k  = 0;
	if (!sub)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			size_word = size_sub(&s[i], c);
			sub[j] = (char *)malloc(sizeof(char) * (size_word + 1));
			if (!sub[j])
			{
				while (k < j)
				{
					free(sub[k]);
					k++;
				}
				free(sub);
				return (NULL);
			}
			strncpy(sub[j], &s[i], size_word);
			sub[j][size_word] = '\0';
			j++;
			i += size_word;
		}
		else
		{
			i++;
		}
	}
	sub[j] = NULL;
	return (sub);
}
