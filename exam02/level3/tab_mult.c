#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    
}

void putnbr(int nb)
{
    if (nb > 9)
        putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res);
}

int main(int ac, char **av)
{
    int i;
    int number;
    if (ac == 2)
    {
        i = 1;
        number = ft_atoi(av[1]);
        while (i <= 9)
        {
            putnbr(i);
            ft_putstr(" x ");
            putnbr(number);
            ft_putstr(" = ");
            putnbr(number * i);
            ft_putstr("\n");
            i++;
        }
    }
    
}