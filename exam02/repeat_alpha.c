int repeat(char c)
{
    int res;

    if (c >= 'a' && c <= 'z')
        res = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
        res = c - 'A' + 1;
    else
        res = 1;
    return (res);
}
#include <unistd.h>

int main(int ac , char **av)
{
    int count;

    if (ac > 1)
    {
        while (*av[1])
        {
            count = repeat(*av[1]);
            while (count--)
                write(1, av[1], 1);
            av[1]++;
        }   
    }
}