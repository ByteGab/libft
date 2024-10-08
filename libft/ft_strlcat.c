/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:21 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/30 16:17:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t z;

    i = 0;
    z = 0;
    while (dst[i] != '\0')
    {
        i++;
    }
    while (src[z] != '\0' && z < size)
    {
        dst[i + z] = src[z];
        z++;
    }
    dst[i + z] = '\0';
    return (dst);
}