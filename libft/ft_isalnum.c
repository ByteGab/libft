/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:12 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/27 18:15:52 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int ft_isalnum(char c)
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

/*
int main(void)
{
    int	c;
    
    c ='`';
	c = ft_isalnum(c) + '0';
	write(1, &c, 1);
	return (0);
}
*/