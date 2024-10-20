/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:53 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 12:47:44 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*char_dest;
	const unsigned char	*char_src;

	if (!dest && !src)
		return (NULL);
	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	if (n == 0 || char_dest == char_src)
		return (dest);
	if (char_src < char_dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			char_dest[i] = char_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			char_dest[i] = char_src[i];
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
