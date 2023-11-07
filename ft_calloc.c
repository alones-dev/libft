/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:11:42 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 09:05:57 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbrElement, size_t sizeElement)
{
	int	*mem;
	int	i;

	mem = malloc(nbrElement * sizeElement);
	if (!mem)
		return (NULL);
	i = 0;
	while (nbrElement != 0)
	{
		mem[i] = 0;
		i++;
		nbrElement--;
	}
	return (mem);
}
