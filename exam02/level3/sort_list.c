// #include "sort_list.h"

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     int tmp;
//     t_list *current_x;
//     t_list *current_y;

//     current_x = lst;

//     while (current_x->next)
//     {
//         current_y = current_x;
//         while (current_y)
//         {
//             if (cmp(current_x->value, current_y->value) == 0)
//             {
//                 tmp = current_x->value;
//                 current_x->value = current_y->value;
//                 current_y->value = tmp;
//             }
//             current_y= current_y->next;
//         }
//         current_x = current_x->next;
//     }
//     return(lst);
    
// }


#include "sort_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *current_i;
    t_list *current_j;
    int tmp;

    current_i = lst;
    while (current_i->next)
    {
		current_j = current_i;
        while (current_j)
        {
			if ((cmp(current_i->value, current_j->value)) == 0)
            {
				tmp = current_i->value;
                current_i->value = current_j->value;
                current_j->value = tmp;
            }
            current_j = current_j->next;
        }
        current_i = current_i->next;
    }
	return(lst);
}
#include <unistd.h> // For write // For write
#include <stdlib.h> // For write // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*ft_new_elem(int value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	ft_list_foreach_space(t_list *begin_list, void (*f)(int))
{
	while (begin_list != NULL)
	{
		if (begin_list->value)
			(*f)(begin_list->value);
		ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem(42);
	test_list->next = ft_new_elem(666);
	test_list->next->next = ft_new_elem(69);
	test_list->next->next->next = ft_new_elem(420);
	test_list->next->next->next->next = ft_new_elem(669);
	test_list->next->next->next->next->next = ft_new_elem(42);
	test_list->next->next->next->next->next->next = ft_new_elem(0);
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	sort_list(test_list, ascending);
	ft_putchar('\n');
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	ft_putchar('\n');
	return (0);
}