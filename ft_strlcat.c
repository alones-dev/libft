#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstSize)
{
	int	lenSrc;
	int	i;

	lenSrc = ft_strlen(dst);
	i = 0;
	if (dstSize <= lenSrc)
		return (ft_strlen(src) + dstSize);
	while (src[i] && (lenSrc + i) < (dstSize - 1))
	{
		dst[lenSrc + i] = src[i];
		i++;
	}
	dst[lenSrc + i] = '\0';
	return (ft_strlen(src) + lenSrc);
}

