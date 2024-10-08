/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/08 16:10:17 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
int ft_isalpha(int c)
{
    unsigned char cChar;

    cChar = (unsigned char)c; // change name variable

    if((cChar >= 65 && cChar <= 90)
        || (cChar >= 97 && cChar <= 122))
        {
            return (1);
        }
        else
        {
            return (0);
        }
}


int main(void)
{
    int	c;
    
    c = "-c";
	c = ft_isalpha(c) + '0';
	write(1, &c, 1);
	return (0);
}

