#include <stdio.h>
#include "libft.h"

int main()
{
    char *sub1 = ft_substr("Hello World!", 6, 5);
    printf("%s\n", sub1);
    free(sub1);
    char *sub2 = ft_substr("Hello World!", 0, 5);
    printf("%s\n", sub2);
    free(sub2);
    char *sub3 = ft_substr("Hello World!", 20, 5);
    printf("%s\n", sub3);
    free(sub3);
    char *sub4 = ft_substr("Hello World!", 6, 20);
    printf("%s\n", sub4);
    free(sub4);
	char *sub5 = ft_substr(NULL, 6, 20);
    printf("%p\n", sub5);
    free(sub5);
}
