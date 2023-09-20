#include <stdio.h>

void *ft_calloc(size_t nbrElement, size_t sizeElement)
{
    int *mem;
    int i;

    mem = malloc(nbrElement * sizeElement);
    if (!mem)
        return (NULL);
    i = 0;
    while (nbrElement != 0)
    {
        mem[i] = 0;
        i++;
        nbrElement--;
    }
    return (mem);
}