#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int tab[256] = {};

    if (ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] && !tab[(int)av[2][j]])
                {
                    ft_putchar(av[2][j]);
                    tab[(int)av[2][j]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return(0);
}