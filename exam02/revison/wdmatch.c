#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return i;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				len++;
				break;//////////////////////////
			}
			j++;
		}
		i++;
	}
	if (len == ft_strlen(s1))/////::////////////////
		ft_putstr(s1);////////////////////
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_wdmatch(av[1], av[2]);
}