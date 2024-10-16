/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 16:52:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	size_src;
	size_t	i;
	
	size_src = ft_strlen(src);
	i = 0;
	if(!src)
	{
		return(0);
	}
	if(size == 0)
	{
		return (size_src);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_src);
}
/*
int	main(void)
{
	size_t	i;
	char	dest[10] = "hola";
	char	result;

	i = 10;
	char src [5] = "adios";
	result = ft_strlcpy(dest, src, i);
	write(1, result, 1);
	return (0);
}
*/