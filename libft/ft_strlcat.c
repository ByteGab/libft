/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:42 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/19 16:30:44 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    ft_strlcat(char *dst, const char *src, unsigned int size) // change variable "size"
{
    unsigned int    i;
    unsigned int    z;

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