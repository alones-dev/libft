#include <stdio.h>

char *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    unsigned char *mem;

    i = 0;
    mem = (unsigned char *)s;
    while (i < n)
    {
        if (mem[i] == c)
            return ((void *)mem + i);
        i++;
    }
    return (0);
}