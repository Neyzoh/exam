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

    i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] && !tab[(int)av[2][j]])
                {
                    tab[(int)av[2][j]] = 1;
                    ft_putchar(av[2][j]);
                }
                j++;
            }
            i++;
        }
    }
        return (0);
    
}