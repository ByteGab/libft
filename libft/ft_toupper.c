/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:59 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/30 16:08:57 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_toupper (int c)
{
    if (c >= 97 && c <= 122)
    {
            return (c - 32);
    }
    return ('c');
}

int main(void)
{
    int	c;
    
    c ='h';
	c = ft_toupper(c);
	write(1, &c, 1);
	return (0);
}