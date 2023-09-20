int ft_isalphalower(int c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}

int ft_toupper(int c)
{
    if (ft_isalphalower(c))
        c = c - 32;
    return (c);
}