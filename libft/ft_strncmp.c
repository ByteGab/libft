/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:53:20 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/25 19:53:20 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp (const char *s1, const *s2, unsigned int n) // change variabe "n"
{
    unsigned int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1 == s2[i] == s2[i] && i < n)
    {
        i++;
    }
    return (s1[i] - s2[i]);

}