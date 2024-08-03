#include "../pushswap.h"
int matrix_size(char **matrix)
{
    int i;

    i = 0;
    while (matrix[i])
    {
        i++;
    }    
    return(i);
}
int tab_size(long *tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        i++;
    }    
    return(i);
}
