#include <string.h>

int find(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        if (find((char *)s2, *s1))
            return((char *)s1);
        s1++;
    }
    return (NULL);/////////////
}

#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", strpbrk(av[1], av[2]));
    printf("%s", ft_strpbrk(av[1], av[2]));
    return 0;
}