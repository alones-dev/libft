#include <stdio.h>

void ft_memset(void *s, int c, size_t n)
{
    int i;
    char *mem;

    i = 0;
    mem = (char *)s;
    while (i < n)
    {
        mem[i] = c;
        i++;
    }
    return (mem);
}