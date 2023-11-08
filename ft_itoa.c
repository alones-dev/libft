/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:47:26 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/08 10:23:11 by kdaumont         ###   ########.fr       */
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
	if (nb < 0)
		i = 1;
	while (nb2 != 0)
	{
		i++;
		nb2 = nb2 / 10;
	}
	return (i);
}

void	rev_char(char *tab, int size, int neg)
{
	int		i;
	int		temp;
	float	j;

	if (neg == 1)
		i = 1;
	else
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
	char	*tbl;
	int		i;
	int		neg;

	i = 0;
	tbl = malloc(sizeof(char) * get_len_int(n));
	if (n < 0)
	{
		tbl[0] = '-';
		n = -n;
		i = 1;
		neg = 1;
	}
	while (n != 0)
	{
		tbl[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (neg == 1)
		rev_char(tbl, ft_strlen(tbl), 1);
	else
		rev_char(tbl, ft_strlen(tbl), 0);
	return (tbl);
}

void	main(void)
{
	printf("%s\n", ft_itoa(-125));
}