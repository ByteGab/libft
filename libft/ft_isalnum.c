/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:12 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/08 16:28:28 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{    
    if (((c >= 65 && c <= 90)
        || (c >= 97 && c <= 122))
        || (c >= 48 && c <= 57))
    {
        return (1); // si es alpha || si es digit
    }
    else
    {
        return (0); // si no es
    }
}


int main(void)
{
    int	c;
    
    c = 'b';
	c = ft_isalnum(c);
    c += '0'; 
	write(1, &c, 1);
	return (0);
}
