#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;
    char *mem;
    char *base;

    if (n == 0 || (!dest && !src))
        return (NULL);
    i = 0;
    mem = (char *)dest;
    base = (char *)src;
    while (i < n)
    {
        if (base[i] == c)
            return (mem[i + 1]);
        mem[i] = base[i];
        i++;
    }
    return (NULL);
}