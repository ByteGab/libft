/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:01 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:10:34 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isdigit(int c) // revision
{
    if(c >= 48 && c <= 57)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int main(void)
{
    int	c;
    
    c = 5;
	c = ft_isdigit(c) + '0';
	write(1, &c, 1);
	return (0);
}