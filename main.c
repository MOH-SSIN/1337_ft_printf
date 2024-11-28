#include "ft_printf.h"
#include <limits.h>

int main()
{
    // char *ptr;
    // char x = 10;
    // ptr = &x;
    // printf("%p\n", NULL);
    // ft_printf("%p\n", NULL);
    // ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    return (0);
}