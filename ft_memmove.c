#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
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
        mem[i] = base[i];
        i++;
    }
    return (mem);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    char *mem1;
    char *mem2;

    if (n == 0 || (!dest && !src))
        return (NULL);
    mem1 = (char *)dest;
    mem2 = (char *)src;
    i = 0;
    while (i < n)
    {
        mem2[i] = mem1[i];
        i++;
    }
    return (mem1);
}