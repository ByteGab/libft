/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 11:51:35 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	if (c == '\0')
	{
		while (*str != '\0')
		{
			str++;
		}
		return ((char *)str);
	}
	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_occurrence = str;
		}
		str++;
	}
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