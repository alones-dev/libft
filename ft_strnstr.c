#include <stdio.h>

char *ft_strnstr(const char *s1 , const char *s2 , size_t len)
{
	int	i;
	int	j;
	int	lenS2;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	lenS2 = ft_strlen(s2);
	while (s1[i] && (i + lenS2 - 1) < len)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j])
		{
			if (j == lenS2 - 1)
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (0);
}

