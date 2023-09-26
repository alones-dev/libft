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

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    int i;
    int j;

    new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    i = 0;
    j = 0;
    while (s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return (new);
}