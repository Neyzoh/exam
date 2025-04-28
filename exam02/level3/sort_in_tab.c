void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
        j = i;
        while (j < size)
        {
            if (tab[i] < tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
    
}
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
    
}

#include <stdio.h>
int main()
{
    int i;

    i = 0;
    int tab[] = {88, 455, 5, 3};
    sort_int_tab(tab, 4);
    while (i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }

}