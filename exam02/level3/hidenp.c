#include <unistd.h>
int ft_strlen(char *str)
{
    int i;

    while (str[i])
        i++;
    return(i);
}
int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 3)
    {
        i = 0;
        j = 0;
        
        while (av[2][j] && av[1][i])
        {
            if (av[2][j] == av[1][i])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}