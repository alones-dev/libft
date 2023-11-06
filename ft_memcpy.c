/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:05 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:13:03 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *mem;
    char *base;

    if (n == 0 || (!dest && !src))
        return (NULL);
    i = 0;
    mem = (char *)dest;
    base = (char *)src;
    while (i < n)
    {
        mem[i] = base[i];
        i++;
    }
    return (mem);
}