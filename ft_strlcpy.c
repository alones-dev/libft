int ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (size > 0)
    {        
        while (src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}