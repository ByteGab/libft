/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 13:01:25 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	z;
	char	*mem;
	char	*rm_set;

	i = 0;
	z = 0;
	rm_set = (char *)set;
	size = ft_strlen((char)s1);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		while (s1[i] == rm_set[z])
		{
			mem[i] = s1[i + 1];
		}
		z++;
		i++;
	}
	return (mem);
}
