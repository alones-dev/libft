/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:48:39 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/08 12:40:00 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tbl;

	i = 0;
	tbl = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!tbl)
		return (NULL);
	while (s[i])
	{
		tbl[i] = f(i, s[i]);
		i++;
	}
	tbl[i] = '\0';
	return (tbl);
}
