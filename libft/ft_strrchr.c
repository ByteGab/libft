/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/20 14:55:27 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char	*last_occurrence;

	i = 0;
	last_occurrence = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			last_occurrence = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (last_occurrence);
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