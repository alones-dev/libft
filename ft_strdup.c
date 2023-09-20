#include <stdlib.h>

int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    int i;
    char *dup;

    i = 0;
    dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!dup)
        return (NULL);
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}