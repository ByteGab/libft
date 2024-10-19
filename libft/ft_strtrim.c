/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 13:29:18 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	z;
	size_t	j;
	char	*mem;
	char	*rm_set;

	i = 0;
	z = 0;
	rm_set = (char *)set;
	size = ft_strlen((char)s1);
	mem = (char *)malloc(size);
	if (mem == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		while (ft_strchr(set, s1[i]) != NULL)
		{
			i++;
		}
		mem[z] = s1[i];
		z++;
	}
	mem[j] = '\0';
	return (mem);
}
