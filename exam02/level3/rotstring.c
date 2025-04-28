#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotstring(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (str[i] && str[i] == ' ' || str[i] == '\t')
        i++;
    j = i;
    while (str[i])
    {
        while (str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        while (str[i] && str[i] == ' ' || str[i] == '\t')
            i++;
        
        
    }
    
}