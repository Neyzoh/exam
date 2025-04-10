int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int max;

    i = 0;
    max = tab[0];
    if (len == 0 || !tab)
        return (0);
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

#include <stdio.h>

int main()
{
	//int int_tab[] = {-1, -3, -2, -10, -9};
	printf("%d", max(NULL, 0));
}