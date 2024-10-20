/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 11:55:24 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	new_len;
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	if (start > end)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
		return (result);
	}
	new_len = end - start + 1;
	result = (char *)malloc(new_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < new_len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[new_len] = '\0';
	return (result);
}
