/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:31 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:12:49 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i != 0)
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (0);
}