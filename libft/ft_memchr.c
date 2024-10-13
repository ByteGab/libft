/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:05:24 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:00:41 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	char *strchar;

	strchar = (char *)str;
	i = 0;
	while (strchar[i] != '\0' && i < n)
	{
		if (strchar[i] == (char)c)
		{
			return (strchar[i]);
		}
		i++;
	}
	return (NULL);
}