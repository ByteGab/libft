/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:40 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:24:05 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
 
int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            return (1); // Si es letra
        }
        else
        {
            return (0); // Si no es letra
        }
}

/*
int main(void)
{
    int	c;
    
    c = 'y';
	c = ft_isalpha(c) + '0';
	write(1, &c, 1);
	return (0);
}
*/