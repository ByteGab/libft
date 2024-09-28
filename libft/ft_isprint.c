/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:25:13 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:35:02 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int ft_isprint(char a)
{
    if(!(a >= 32 && a <= 126))
    {
        return (0); // no es printable
    }
    return (1); // si es printable
}

/*
int main(void)
{
    int	c;
    int c2;
    
    c = '\0';
	c2 = ft_isprint(c) + '0';
	write(1, &c2, 1);
	return (0);
}
*/
