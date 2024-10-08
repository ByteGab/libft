/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:43 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/08 16:54:43 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *destchar;
    char *srchar;

    i = 0;
    destchar = (char*)dest;
    srchar = (char*)src;
    while(i < n)
    {
        destchar[i] = srchar[i];
        i++;
    }
    return dest;
}

int main(void)
{
    char src[50] = "Hello World!";
    char dest[50] = "Bye World!";// revision !\0 (puede ser que haga falta)
    ft_memcpy(dest, src, 5);
    write(1, dest, strlen(dest));
    return (0);
}