/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:13 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/08 16:23:13 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    unsigned char cChar;

    cChar = (unsigned char) c;
    if(!(cChar >= 32 && cChar <= 126))
    {
        return (0); // no es printable
    }
    return (1); // si es printable
}


int main(void)
{
    int	c;
    int c2;
    
    c = '\0';
	c2 = ft_isprint(c) + '0';
	write(1, &c2, 1);
	return (0);
}

