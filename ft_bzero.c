#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    int i;
    char *mem;

    i = 0;
    mem = (char *)s;
    while (i < n)
    {
        mem[i] = 0;
        i++;
    }
}