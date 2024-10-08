/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/08 16:11:44 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c) // revision
{
    unsigned char cChar;

    cChar = (unsigned char)c;

    if(cChar >= 48 && cChar <= 57)
    {
        return (1); // Si es un digito
    }
    else
    {
        return (0); // Si no es un digito
    }
}


int main(void)
{
    int	c;
    
    c = '5';
	c = ft_isdigit(c) + '0';
	write(1, &c, 1);
	return (0);
}
