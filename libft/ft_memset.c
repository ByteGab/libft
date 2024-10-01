/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:17:00 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/23 18:17:06 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h> // use function ft_strlen --
#include <stddef.h>

void *ft_memset(void * s, int c, size_t n)
{
    size_t i;
    char *schar; 

    schar = (char *)s; 
    i = 0;
    while(i < n)
    {
        schar[i] = (unsigned char)c;
        i++;
    }
    return s;
}

int main(void)
{
    char str[50] = "Hello World!";
    ft_memset(str, '-', 3);
    write(1, str, strlen(str));
    return (0);
}