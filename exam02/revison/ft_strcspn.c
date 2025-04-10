#include <stddef.h>
#include <stdio.h>
#include <string.h>

int to_reject(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return 1;
        i++;
    }
    return 0;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (to_reject((char *)reject, s[i]))
            return (i);
        i++;
    }
    return (i);
}
int main(int ac, char **av)
{
    (void)ac;

    printf("%lu\n", strcspn(av[1], av[2]));
    printf("%lu", ft_strcspn(av[1], av[2]));

    return 0;
}