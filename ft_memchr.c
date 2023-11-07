/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:01 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 09:06:13 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		if (mem[i] == c)
			return ((void *)mem + i);
		i++;
	}
	return (0);
}
