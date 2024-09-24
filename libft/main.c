/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:23:42 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/19 16:23:45 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

#include "libft.h"

int	main(void)
{




    // ft_strlcpy
	char src[] = "holagjga";
	char dest[] = "chaooo";

	printf("%d | %s", ft_strlcpy(dest, src, 12), dest);


    // ft_toupper
	char	str1;
	char	*str;
	char	str2;
	char	*str3;

	str = "gFshgdd";
	str1 = ft_str_is_uppercase(str) + '0';
	str3 = "GHDJDJ";
	str2 = ft_str_is_uppercase(str3) + '0';
	write(1, &str1, 1);
	write(1, &str2, 1);
	return (0);
}