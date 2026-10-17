#include <stdio.h>
#include "libft.h"

int main()
{
    char *s1 = ft_strdup("Hello World!");
    printf("%s\n", s1);
    free(s1);
    char *s2 = ft_strdup("");
    printf("%s\n", s2);
    free(s2);
}
