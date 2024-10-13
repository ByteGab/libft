/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:31 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 03:07:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char * ft_strnstr(const char *big, const char * little, size_t len)
{
    size_t  i;
    size_t  z;
    
    i = 0;
    z = 0;
    if(!little)
    {
        return ((char *)big);
    }
    

    while (big[i] != '\0' && i < len)
    {
        if(big[i + z] == *little)
        {
            while (big[i + z] == little[z])
            {
                z++;
            }
            return ((char *)&big[i]);
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>

int main(void)
{
    const char *big = "hola cacargkhhfs";
    const char *little = "caca";
    size_t len;
    
    printf("%s\n", ft_strnstr(big, little, 8));
    return (0);
}