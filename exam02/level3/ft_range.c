
// #include <stdlib.h>

// int     *ft_range(int start, int end)
// {
//     int i;
//     int len;
//     int *tab;

//     len = end - start;
//     if (len > 0)
//     {
//         tab = malloc(sizeof(int) * (len + 1));
//         if (!tab)
//             return (NULL);
//         i = 0;
//         while (start <= end)
//         {
//             tab[i] = start;
//             i++;
//             start++;
//         }
//     }
//     else if (len <= 0)
//     {
//         len = start - end;
//         tab = malloc(sizeof(int) * (len + 1));
//         if (!tab)
//             return (NULL);
//         i = 0;
//         while (start >= end)
//         {
//             tab[i] = start;
//             i++;
//             start--;
//         }
//     }
//     return (tab);
// }


#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int *range;
    int len;

    len = end - start;
    if (len > 0)
    {
        range = malloc(sizeof(int) * (len + 1));
        if (!range)
            return (NULL);
        i = 0;
        while (start <= end)
        {
            range[i] = start;
            i++;
            start++;
        }
    }
    else if (len <= 0)
    {
        len = start - end;
        range = malloc(sizeof(int) * (len + 1));
        if(!range)
            return(NULL);
        i = 0;
        while (start >= end)
        {
            range[i] = start;
            i++;
            start--;
        }
    }
    return(range);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 0;
	max = -3;
	tab = ft_range(min, max);
	i = 0;
	while (i < (min - max + 1))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}