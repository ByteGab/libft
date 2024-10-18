/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:21 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:13:07 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	// Calcula las longitudes de las cadenas
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;

	// Si el tamaño es menor o igual que la longitud de dst, no concatenamos
	if (dst_len == size)
		return (size + src_len);

	// Concatenamos src en dst hasta que llenemos el espacio o terminemos src
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1) {
		dst[i] = src[j];
		i++;
		j++;
	}

	// Añadir el terminador nulo si hay espacio
	if (i < size)
		dst[i] = '\0';

	// Devolver el tamaño combinado que se habría generado
	return (dst_len + src_len);
}
