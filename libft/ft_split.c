/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:18:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 22:13:22 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int		i;
	int		flag;
	size_t	count;

	i = 0;
	flag = 0;
	count = 0;
	if (s[i] != c && flag == 0)
	{
		count++;
		flag = 1;
	}
	else if (s[i] == c)
	{
		flag = 0;
	}
	i++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
}
