/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/09/25 18:26:28 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcpy (char *dst, const char *src, unsigned int size) // change  variable "size"
{
    unsigned int  i;
    unsigned int len;

    i = 0;
    len = ft_strlen(src);
    if (size != 0)
    {
        while (src[i] != '\0' && i < size -1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (len);

}