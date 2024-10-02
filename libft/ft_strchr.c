/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:06 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/30 16:15:15 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
        {
            return (char *)&s[i]; //change to pointer
        }
        i++;
    }
    return (NULL);
}

int main() {
    const char *texto = "hola mundo";
    char *resultado = ft_strchr(texto, 'm');

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Posición: %ld\n", resultado - texto);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}