/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:29 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 12:23:20 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	len_s2 = ft_strlen(s2);
	while (s1[i] && (i + len_s2 - 1) < len)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j])
		{
			if (j == len_s2 - 1)
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (0);
}
