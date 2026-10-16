#include <stdio.h>
#include "libft.h"

int main()
{
    char *str_nstr = "Hello World!";
    char *nptr;

    printf("%s\n", ft_strnstr(str_nstr, "World", 12));
    printf("%s\n", ft_strnstr(str_nstr, "Hello", 12));
    printf("%s\n", ft_strnstr(str_nstr, "", 12));

    nptr = ft_strnstr(str_nstr, "World", 5);
    if (nptr == NULL)
        printf("World in 5 bytes: NOT FOUND (NULL)\n");
    else
        printf("%s\n", nptr);

    nptr = ft_strnstr(str_nstr, "z", 12);
    if (nptr == NULL)
        printf("z: NOT FOUND (NULL)\n");
    else
        printf("%s\n", nptr);
}
