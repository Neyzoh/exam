#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int c_to_s(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
    
}

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (c_to_s(av[1][i]))
                ft_putchar('_');
            ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}