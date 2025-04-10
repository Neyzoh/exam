#include <stddef.h>
#include <stdio.h>
#include <string.h>

int to_accept(char *str,char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return (0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (!(to_accept((char *)accept, s[i])))
            return(i);
        i++;
    }
    return(i);
}
int main(int ac, char **av)
{
    (void)ac;
    printf("%lu\n", strspn(av[1], av[2]));
    printf("%lu", ft_strspn(av[1], av[2]));

}