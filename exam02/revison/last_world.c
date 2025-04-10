#include <unistd.h>

void last_word(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    len--;
    while (str[len] && (str[len] == ' ' || str[len] == ('\t')))
        len--;
    while (str[len] && (str[len] != ' ' && str[len] != '\t'))
        len--;
    len++;
    while (str[len] && (str[len] != ' ' && str[len] != '\t')) /////////////////////////////////////
    {
        write(1, &str[len], 1);
        len++;
    } 

}
int main(int ac, char **av)
{
    (void)ac;
    last_word(av[1]);
    return 0;
}