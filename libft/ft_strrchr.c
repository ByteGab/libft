/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/03 17:15:18 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i +=1;
    
    while (i != 0)
    {
        if(str[i] == c)
        {
            return (char *)&str[i];
        }
        i--;
    }
    return (NULL);
        
}

int main() {
    const char *texto = "hola adios hola";
    char *resultado = ft_strrchr(texto, 'h');

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Posición: %ld\n", resultado - texto);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}