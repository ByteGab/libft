/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:16:56 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:30:52 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size;
	char	*mem;

	i = 0;
	size = ft_strlen(s1);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_strlcat(s1, s2, size);
	return (s1);
}
