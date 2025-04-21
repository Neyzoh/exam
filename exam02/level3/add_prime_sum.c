#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    long nb;

    nb = nbr;
    if (nb < 0)
    {
        ft_putchar('-');
        nb -= nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int is_prime(int nb)
{
    int i;

    i = 2;

    if (nb < 2)
        return(0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return(nb);
}

int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign -= 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}

int main(int ac, char **av)
{
    if (ac != 2 || ft_atoi(av[1]) <= 0)
        return (0);
    
    int n = ft_atoi(av[1]);
    int sum = 0;
    
    while (n > 1) //////////
    {
        if (is_prime(n))
            sum += n; ///////
        n--;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
}