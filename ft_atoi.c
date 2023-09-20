int ft_atoi(const char *nptr)
{
    int i;
    int nbr;
    int sign;
    int count;

    i = 0;
    nbr = 0;
    sign = 1;
    count = 0;
    while (nptr[i] == ' ' || ('\t' <= nptr[i] && nptr[i] <= '\r'))
        i++;
    while ((nptr[i] == '+' || nptr[i] == '-') && count < 1)
    {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
        count++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
       nbr = nbr * 10 + nptr[i] - '0';
       i++; 
    }
    return (nbr * sign);
}