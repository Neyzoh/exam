int rot13(char c)
{
    if ((c >= 'a' && c <= 'm')|| (c >= 'A' && c <= 'M'))
        return c + 13;
    else if ((c >= 'n' && c <= 'z')|| (c >= 'N' && c <= 'Z'))
        return c - 13;
    else
        return c;
}

#include <unistd.h>

int main(int ac, char **av)
{
     char res;
     if (ac == 2)
     {
        while (*av[1])
        {
            res = rot13(*av[1]);
            write(1, &res, 1);
            av[1]++;
        }
        
     }
     
}