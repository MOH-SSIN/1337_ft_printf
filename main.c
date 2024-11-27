#include "ft_printf.h"

int main()
{
    // int count = ft_printf("salut je suis %s, j'ai %d ans\n","mohcine",19);
    int count = ft_printf("y = %X", -1);
    printf("count = %d\n",count);
    // ft_printf("%s\n",NULL);
    return (0);
}