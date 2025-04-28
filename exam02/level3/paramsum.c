#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    putnbr(int nbr)
{
    if (nbr > 9)
        putnbr(nbr / 10);
    ft_putchar(nbr % 10 + '0');
}

int main(int ac, char **av)
{
    (void)av;

    putnbr(ac - 1);
    ft_putchar('\n');
    return (0);
}