int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i != 0)
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (0);
}