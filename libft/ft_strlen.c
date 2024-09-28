/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:37 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:43:20 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>

size_t ft_strlen(const char *s) // revision libreria
{
    size_t i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}
/*
int main() {
    const char *str = "Hola, mundo!";
    size_t length = ft_strlen(str); // Llamar a la función

    printf("La longitud de la cadena es: %zu\n", length); // Imprimir la longitud
    return 0;
}
*/