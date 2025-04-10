#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int res;
    
    res = 0;
    if (ac == 4)
    {
        if (av[2][0] == '*')
            res = atoi(av[1]) * atoi(av[3]);
        if (av[2][0] == '+')
            res = atoi(av[1]) + atoi(av[3]);
        if (av[2][0] == '-')
            res = atoi(av[1]) - atoi(av[3]);
        if (av[2][0] == '/')
            res = atoi(av[1]) / atoi(av[3]);
        if (av[2][0] == '%')
            res = atoi(av[1]) % atoi(av[3]);
        
        printf("%d\n", res);
    }
    return (0);
}