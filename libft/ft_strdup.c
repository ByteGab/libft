/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:32:37 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 14:34:24 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *mem;
    size_t size;

    size = ft_strlen(s) + 1;
    mem =(char *)malloc(size);
    if (mem != NULL)
        ft_strlcpy(mem, s, size);
        return (mem);
}