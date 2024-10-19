/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:31 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:01:50 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		z = 0;
		while (big[i + z] == little[z] && (i + z) < len)
		{
			if (little[z + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			z++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*big = "hola cacargkhhfs";
	const char	*little = "caca";
	size_t		len;

	printf("%s\n", ft_strnstr(big, little, 8));
	return (0);
}
*/