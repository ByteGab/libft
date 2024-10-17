/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:16:56 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/17 16:51:14 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*mem;

	size = ft_strlen(s1);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_strlcat((char *)s1, s2, size);
	return ((char *)s1);
}
