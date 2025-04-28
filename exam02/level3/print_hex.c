#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    putnbr(int nb)
{
    char *hexa = "0123456789abcdef";

    if (nb >= 16)
        putnbr(nb / 16);
    nb = hexa[nb % 16];
    ft_putchar(nb);
}

int ft_atoi(char *str)
{
    int i;
    int res;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res);
}

int main(int ac, char **av)
{
    int number;
    if (ac == 2)
    {
        number = ft_atoi(av[1]);
        putnbr(number);
    }
    ft_putchar('\n');
    return(0);
}

