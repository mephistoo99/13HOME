#include <stdio.h>
#include "libft.h"
#include <limits.h>

int main()
{
    char *i1 = ft_itoa(0);
    printf("%s\n", i1);
    free(i1);
    char *i2 = ft_itoa(42);
    printf("%s\n", i2);
    free(i2);
    char *i3 = ft_itoa(-42);
    printf("%s\n", i3);
    free(i3);
    char *i4 = ft_itoa(2147483647);
    printf("%s\n", i4);
    free(i4);
    char *i5 = ft_itoa(-2147483648);
    printf("%s\n", i5);
    free(i5);
}
