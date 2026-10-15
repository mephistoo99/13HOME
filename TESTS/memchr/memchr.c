#include "libft.h"
#include <stdio.h>

int main()
{
    char mem_arr[] = "Hello World!";
    char *mptr;

    printf("%s\n", (char *)ft_memchr(mem_arr, 'W', 12));
    printf("%s\n", (char *)ft_memchr(mem_arr, 'o', 12));

    mptr = (char *)ft_memchr(mem_arr, 'z', 12);
    if (mptr == NULL)
        printf("z: NOT FOUND (NULL)\n");
    else
        printf("%s\n", mptr);

    mptr = (char *)ft_memchr(mem_arr, 'W', 3);
    if (mptr == NULL)
        printf("W in first 3 bytes: NOT FOUND (NULL)\n");
    else
        printf("%s\n", mptr);

    printf("%s\n", (char *)ft_memchr(mem_arr, '\0', 13));
    
}

