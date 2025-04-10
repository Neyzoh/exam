#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac , char **av)
{
    int i;
    int tab[256] = {};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            tab[(int)av[1][i]] = 1;
            i++;
        }
        i = 0;
          while (av[2][i])
        {
            tab[(int)av[2][i]] = 1;
            i++;
        }
        i = 0;
        while (av[1][i])
        {
            if (tab[(int)av[1][i]])
            {
                tab[(int)av[1][i]] = 0;
                ft_putchar(av[1][i]);
            }
            i++;
        }
        i = 0;
          while (av[2][i])
        {
            if (tab[(int)av[2][i]])
            {
                tab[(int)av[2][i]] = 0;
                ft_putchar(av[2][i]);
            }
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}