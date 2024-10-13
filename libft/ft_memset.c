/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:17:00 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 16:48:55 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*schar;

	i = 0;
	schar = (unsigned char *)s;
	while (i < n)
	{
		schar[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[50] = "Hello World!";

	ft_memset(str, '-', 3);
	write(1, str, strlen(str));
	return (0);
}
*/
