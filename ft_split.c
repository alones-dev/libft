/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:15 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 14:08:45 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tbl;

	j = 0;
	tbl = malloc(sizeof(char) * (count_words((char *)s, c) + 1));
	if (!tbl)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (*s && i)
			tbl[j++] = ft_substr(s, 0, i);
		s = s + i;
	}
	tbl[j] = NULL;
	return (tbl);
}

void	main(void)
{
	printf("%s\n", *ft_split("kfgkjsg-sdgdsg--dsgds-sd", '-'));
}
