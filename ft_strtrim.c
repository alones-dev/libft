/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:33 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 09:08:23 by kdaumont         ###   ########.fr       */
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

int	is_in_set(int c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	set_new_str(char const *s1, char *new, int start, int end)
{
	int	i;

	i = 0;
	while (s1[start] && start < end)
	{
		new[i] = s1[start];
		start++;
		i++;
	}
	new[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	start = 0;
	end = ft_strlen(s1) - 1;
	new = malloc(sizeof(char) * (end - start) + 2);
	if (!new)
		return (NULL);
	while (is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end], set))
		end--;
	set_new_str(s1, new, start, end + 1);
	return (new);
}
