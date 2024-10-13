/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:33:02 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:01:08 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1char;
	unsigned char	*str2char;

	i = 0;
	str1char = (unsigned char *)str1;
	str2char = (unsigned char *)str2;
	while (str1char[i] != '\0' && str2char[i] != '\0'
		&& str1char[i] == str2char[i] && i < n)
	{
		i++;
	}
	return (str1char[i] - str2char[i]);
}
