int ft_isalphaupper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

int ft_tolower(int c)
{
    if (ft_isalphaupper(c))
        c = c + 32;
    return (c);
}