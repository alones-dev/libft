/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:02 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:13:04 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    char *mem1;
    char *mem2;

    if (n == 0)
        return (0);
    i = 0;
    mem1 = (char *)s1;
    mem2 = (char *)s2;
    while (mem1[i] && mem1[i] == mem2[i] && i < n)
        i++;
    if (i < n)
        return ((unsigned char)mem1[i] - (unsigned char)mem2[i]);
    return (0);
}