/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:06 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/12 18:10:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    int z;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    i += 1;
    while(z < i)
    {
        if(s[i] == (char)c)
        {
            return (char *)&s[i];
        }
        z++;
    }
    return (NULL);
}

int main() {
    const char *texto = "hola mundo";
    char *resultado = ft_strchr(texto, '\0');

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Posición: %ld\n", resultado - texto);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}