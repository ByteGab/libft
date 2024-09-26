/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:13:12 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/26 16:54:35 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)// add const char
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - '0') + (result * 10);
        i++;
    }
    return (result * sign);
}