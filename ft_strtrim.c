#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

int isInSet(int c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void setNewStr(char const *s1, char *new, int start, int end)
{
    int i;

    i = 0;
    while (s1[start] && start < end)
    {
        new[i] = s1[start];
        start++;
        i++;
    }
    new[i] = '\0';
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *new;

    start = 0;
    end = ft_strlen(s1) - 1;
    new = malloc(sizeof(char) * (end - start) + 2);
    if (!new)
        return (NULL);
    while (isInSet(s1[start], set))
        start++;
    while (isInSet(s1[end], set))
        end--;
    setNewStr(s1, new, start, end + 1);
    return (new);
}