/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:34:36 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:02:45 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *mem;
	size_t sizeTotal;

	mem = malloc(nmemb * size);
	if (malloc == NULL)
		return (NULL);
	ft_bzero(mem, sizeTotal);
	return (mem);
}