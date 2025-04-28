
int is_valid(int base, int baselen)
{
    char *ucbase = "0123456789ABCDEF";
    char *lcbase = "0123456789abcdef";
    int i;

    i = 0;
    while (i < baselen)
    {
        if (base == lcbase[i] || base == ucbase[i])
            return(1);
        i++;
    }
    return(0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign -= 1;
        i++;
    }

    while (str[i] && is_valid(str[i], str_base))
    {
        if (str[i] >= '0' && str[i] <= '9')
            res = res * str_base + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res = res * str_base + str[i] - 'a' + 10; //////////////////////////////////////////////////
        else if (str[i] >= 'A' && str[i] <= 'F')
            res = res * str_base + str[i] - 'A' + 10;
        i++;
    }
    return (res * sign);
}

// int is_base(int base, int baselen)
// {
//     char *low_base = "0123456789abcdef";
//     char *up_base = "0123456789ABCDEF";
//     int i;

//     while (i < baselen)
//     {
//         if (base == low_base[i] || base == up_base[i])
//             return (1);
//         i++;
//     }
//     return (0);

// }

// int	ft_atoi_base(const char *str, int str_base)
// {
//     int i;
//     int sign;
//     int res;

//     i = 0;
//     sign = 1;
//     res = 0;

//     while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
//         i++;
//     if (str[i] == '+' || str[i] == '-')
//     {
//         if (str[i] == '-')
//             sign -= 1;
//         i++;
//     }
//     while (str[i] && is_base(str[i], str_base))
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//             res = res * str_base + str[i] - '0';
//         else if (str[i] >= 'a' && str[i] <= 'f')
//             res = res * str_base + str[i] - 'a' + 10;
//         else if (str[i] >= 'A' && str[i] <= 'F')
//             res = res * str_base + str[i] - 'A' + 10;
//         i++;
//     }
//     return(res * sign);
// }
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
    printf("%d\n", ft_atoi_base("2a", 16));
	return (EXIT_SUCCESS);
}