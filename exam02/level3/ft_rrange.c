
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int len;
    int *tab;

    len = end - start;
    if (len > 0)
    {
        tab = malloc(sizeof(int) * (len + 1));
        if (!tab)
            return(NULL);
        i = 0;
        while (end >= start)
        {
            tab[i] = end;
            i++;
            end--;
        }
    }
    else if (len <= 0)
    {
        tab = malloc(sizeof(int) * (len + 1));
        if (!tab)
            return (NULL);
        i = 0;
        while (end < start)
        {
            tab[i] = end;
            i++;
            end++;
        }
    }
    return (tab);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 1;
	max = 6;
	tab = ft_rrange(min, max);
	i = 0;
	while (i < (max - min + 1))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}