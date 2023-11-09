/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:39 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 10:02:21 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;
	size_t	str_len;

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	str_len = ft_strlen(new);
	while (s[start] && str_len < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
