#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}
char    *ft_strdup(char *src)
{
    int i;
    char *str;
    
    str = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!str)
        return NULL;
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str = '\0';
    return(str);
}