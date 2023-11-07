/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:47:26 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 16:33:06 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	get_len_int(int nb)
{
	int	i;
	int	nb2;

	i = 0;
	nb2 = nb;
	while (nb2 != 0)
	{
		i++;
		nb2 = nb2 / 10;
	}
	return (i);
}

void	rev_char(char *tab, int size)
{
	int		i;
	int		temp;
	float	j;

	i = 0;
	j = size / 2;
	while (i < j)
	{
		temp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char *tbl;
	int i;

	i = 0;
	tbl = malloc(sizeof(char) * get_len_int(n));
	while (n != 0)
	{
		tbl[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	rev_char(tbl, ft_strlen(tbl));
	return (tbl);
}