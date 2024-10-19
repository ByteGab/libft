/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:11:56 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/19 19:26:28 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t size;
	size_t i;
	char *result;

	size = ft_strlen(s);
	i = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}

	result = (char *)malloc(size + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		result[i] = f(i,s[i]);
        i++;
	}
    result[i] = '\0';
    return (result);
}