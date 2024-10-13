/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:30:16 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*mem;

	size = ft_strlen(s1);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	return((char)set);
}
