/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 03:23:58 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 03:28:46 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(char char_nb)
{
	write (1, &char_nb, 1);
}
void  ft_putnbr_fd (int n, int fd)
{
    if (n == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		ft_write('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_write(n + '0');
	}
}
