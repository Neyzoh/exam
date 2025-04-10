#include <unistd.h>

int rotone(char c)
{
    if (c >= 'a' && c <= 'y')
        return c +1;
    else if (c >= 'A' && c <= 'Y')
        return c +1;
    else if (c >= 'z')
        return 'a';
    else if (c >= 'Z')
        return 'Z';
    else
        return c;
}

int main(int ac , char **av)
{
    int res;

    if (ac == 2)
    {
        while (*av[1])
        {
            res = rotone(*av[1]);
            write(1, &res, 1);
            av[1]++;
        }
        
    }
    
}