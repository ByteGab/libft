/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 18:19:52 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start = 0; // Inicializamos el índice de inicio
    size_t end = ft_strlen(s1) - 1; // Inicializamos el índice de fin
    size_t new_len;
    char *result;

    // Primero, encontramos el primer carácter que no está en "set"
    while (s1[start] != '\0' && ft_strchr(set, s1[start])) {
        start++;
    }

    // Luego, encontramos el último carácter que no está en "set"
    while (end > start && ft_strchr(set, s1[end])) {
        end--;
    }

    // Si no hay caracteres que recortar, devolvemos el string original
    if (start > end) {
        result = (char *)malloc(1);
        result[0] = '\0';
        return result;
    }

    // Calculamos el tamaño del nuevo string (desde start hasta end)
    new_len = end - start + 1;

    // Reservamos memoria para el nuevo string
    result = (char *)malloc(new_len + 1); // +1 para el '\0'
    if (result == NULL) {
        return NULL; // Si la memoria no se pudo asignar, devolvemos NULL
    }

    // Copiamos los caracteres válidos al nuevo string usando un while
    size_t i = 0;
    while (i < new_len) {
        result[i] = s1[start + i];
        i++;
    }

    // Aseguramos que el string esté bien terminado
    result[new_len] = '\0';

    return result;
}
