#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    int i;

    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    i = 0;
    while (s[start] && ft_strlen(new) < len)
    {
        new[i] = s[start];
        start++;
        i++;
    }
    new[i] = '\0';
    return (new);
}