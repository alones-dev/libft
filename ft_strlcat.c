/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:22 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 09:08:04 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstSize)
{
	int	len_src;
	int	i;

	len_src = ft_strlen(dst);
	i = 0;
	if (dstSize <= len_src)
		return (ft_strlen(src) + dstSize);
	while (src[i] && (len_src + i) < (dstSize - 1))
	{
		dst[len_src + i] = src[i];
		i++;
	}
	dst[len_src + i] = '\0';
	return (ft_strlen(src) + len_src);
}
