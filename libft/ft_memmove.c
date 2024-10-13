/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:53 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 16:51:44 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destchar;
	char	*srchar;

	i = n;
	destchar = (char *)dest;
	srchar = (char *)src;
	if (srchar < destchar)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destchar[i] = srchar[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destchar[i] = srchar[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	size_t	i;
	char	src[5] = "adios";
	char	dest[10] = "hola";

	i = 10;
	ft_memmove(dest, src, i);
	write(1, dest, strlen(dest));
	return (0);
}
*/
