/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:11:42 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 12:36:06 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*mem;
	int	i;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	i = 0;
	while (nmemb != 0)
	{
		mem[i] = 0;
		i++;
		nmemb--;
	}
	return (mem);
}
