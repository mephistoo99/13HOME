#include "libft.h"
#include <stdio.h>

char map_toupper(unsigned int i, char c)
{
    (void)i;
    return (ft_toupper(c));
}

char map_tolower(unsigned int i, char c)
{
    (void)i;
    return (ft_tolower(c));
}


int main()
{
    char *m1 = ft_strmapu("hello world!", map_toupper);
    printf("%s\n", m1);
    free(m1);
    char *m2 = ft_strmapu("HELLO WORLD!", map_tolower);
    printf("%s\n", m2);
    free(m2);
}
