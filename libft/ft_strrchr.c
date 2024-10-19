/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 12:00:06 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	if (c == '\0')
	{
		// Buscamos el final de la cadena y devolvemos ese puntero
		while (*str != '\0')
		{
			str++;
		}
		return ((char *)str); // Aquí `str` apunta al carácter nulo
	}
	// Contar la longitud de la cadena
	last_occurrence = NULL; // Puntero para la última ocurrencia
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_occurrence = str;
				// Guardamos la dirección de la última ocurrencia
		}
		str++; // Avanzar al siguiente carácter
	}
	// Retornar la última ocurrencia, o NULL si no se encontró
	return ((char *)last_occurrence);
}
/*
int	main(void)
{
	const char	*texto = "hola adios hola";
	char		*resultado;

	resultado = ft_strrchr(texto, 'h');
	if (resultado != NULL)
	{
		printf("Carácter encontrado: %c\n", *resultado);
		printf("Posición: %ld\n", resultado - texto);
	}
	else
	{
		printf("Carácter no encontrado.\n");
	}
	return (0);
}
*/