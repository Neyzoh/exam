#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 2)
    {
            while (av[1][i] != '\0')
                i++;
            while (i >= 0)
                {
                    write(1, &av[1][i],1);
                    i--;
                }
    }
}