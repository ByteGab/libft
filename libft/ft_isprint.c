/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:17 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/19 16:26:18 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char a)
{
    if(!(a >= 32 && a <= 126))
    {
        return (0);
    }
    return (1);
}
