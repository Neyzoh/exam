#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i - 1] == ' ' && str[i - 1] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        capitalizer(av[1]);
    ft_putchar('\n');
    return (0);
}