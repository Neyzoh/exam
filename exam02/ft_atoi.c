int	ft_atoi(const char *str)
{
    int res;
    int sign;

    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        *str++;
    while (*str == '-')
    {
        sign *= -1;
        *str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (str - '0');
        *str++;
    }
    return(res - sign);
}
