/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:52 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:28:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int ft_isascii(int c) // revision
{
    if(!(c >= 0 && c <= 255))
    {
        return (0);
    }
    return (1);
}

/*
int main(void)
{
    int	c;
    
    c = 'r';
	c = ft_isascii(c) + '0';
	write(1, &c, 1);
	return (0);
}
*/
