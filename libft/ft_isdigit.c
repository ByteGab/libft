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

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
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
    
    c = 'b';
	c = ft_isdigit(c);
    c += '0';
	write(1, &c, 1);
	return (0);
}
