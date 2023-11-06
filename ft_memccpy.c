/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:00 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:51:33 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*mem;
	char	*base;

	if (n == 0 || (!dest && !src))
		return (NULL);
	i = 0;
	mem = (char *)dest;
	base = (char *)src;
	while (i < n)
	{
		if (base[i] == c)
			return (mem[i + 1]);
		mem[i] = base[i];
		i++;
	}
	return (NULL);
}
