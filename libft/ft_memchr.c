/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 17:47:37 by gafreire          #+#    #+#             */
/*   Updated: 2024-10-14 17:47:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*strchar;
	size_t	i;

	strchar = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (strchar[i] == (unsigned char)c)
		{
			return ((void *)&strchar[i]);
		}
		i++;
	}
	return (NULL);
}
