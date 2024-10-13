/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:13:12 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/13 17:02:20 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (nptr[i] == "")
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		i++;
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = result * 10 + nptr[i] - '0';
			i++;
		}
		return (-result);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result);
}