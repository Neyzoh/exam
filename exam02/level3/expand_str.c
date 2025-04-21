#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    expand_str(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            if (str[i + 1] > 32 && str[i + 1] != '\0')
                write(1, "   ", 3);
        }
        else if (str[i] != ' ' || str[i] != '\t')
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        expand_str(av[1]);
    ft_putchar('\n');
    return(0);
}