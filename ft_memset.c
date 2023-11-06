/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:08 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:13:02 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_memset(void *s, int c, size_t n)
{
    int i;
    char *mem;

    i = 0;
    mem = (char *)s;
    while (i < n)
    {
        mem[i] = c;
        i++;
    }
    return (mem);
}