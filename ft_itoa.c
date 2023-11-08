/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:47:26 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/08 12:36:06 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	get_len_int(int nb)
{
	int	i;
	int	nb2;

	i = 0;
	nb2 = nb;
	if (nb < 0)
		i = 1;
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

void	is_negative(int i, int neg, char *tbl)
{
	if (neg == 1)
		tbl[i] = '-';
}

char	*ft_itoa(int n)
{
	char	*tbl;
	int		i;
	int		neg;
	long	n2;

	i = 0;
	neg = 0;
	n2 = n;
	tbl = malloc(sizeof(char) * get_len_int(n));
	if (!tbl)
		return (NULL);
	if (n2 < 0)
	{
		neg = 1;
		n2 = -n2;
	}
	while (n2 != 0)
	{
		tbl[i] = n2 % 10 + '0';
		n2 = n2 / 10;
		i++;
	}
	is_negative(i, neg, tbl);
	rev_char(tbl, ft_strlen(tbl));
	return (tbl);
}

void	main(void)
{
	printf("%s\n", ft_itoa(-27483648));
}