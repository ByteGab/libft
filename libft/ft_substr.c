/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:18:14 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:28:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*mem;

	i = start;
	size = ft_strlen(s);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	if (size - start < len)
		len = size - start;
	while (i < len)
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
