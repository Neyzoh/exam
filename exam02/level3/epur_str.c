#include <unistd.h>

void    epur_str(char *str)
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
            {
                write(1, " ", 1);
            }
        }
        else if (str[i] != ' ' && str[i] != '\0')
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write(1, "\n", 1);
    return (0);
}