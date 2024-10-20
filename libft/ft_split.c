/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:18:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 11:07:39 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t		i;
	size_t		word;
	size_t	count;

	i = 0;
	word = 0;
	count = 0;
	while(s[i] != '\0')
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

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**sub;
	size_t	i;

	words = count_words(s, c);
	sub = (char **)malloc(sizeof(char *) * words);
	while(s[i] != '\0')
	{
		
	}
	while (i < n)
	{
		free(sub[i]);
		i++;
	}
	free(sub);
}
