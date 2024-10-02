/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:53 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/25 18:25:53 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *destchar;
    char *srchar;
    char *temporal;

    i = 0;
    destchar = (char*)dest;
    srchar = (char*)src;
    while (i < n)
    {
        temporal[i] = srchar[i];
        i++;
    }
    while (destchar[i] != '\0')
    {
        destchar[i] = temporal[i];
        i++;
    }
    return dest;
}

int main(void)
{
    char src[10] = "123456789";
    ft_memmove(src, src, 5);
    write(1, src, strlen(src));
    return (0);
}