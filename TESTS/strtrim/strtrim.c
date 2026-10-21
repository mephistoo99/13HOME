#include <stdio.h>
#include "libft.h"

int main()
{
    char *t1 = ft_strtrim("   Hello World!   ", " ");
    printf("%s\n", t1);
    free(t1);
    char *t2 = ft_strtrim("xxHello World!xx", "x");
    printf("%s\n", t2);
    free(t2);
    char *t3 = ft_strtrim("xyxzHello World!zxyx", "xyz");
    printf("%s\n", t3);
    free(t3);
    char *t4 = ft_strtrim("Hello World!", "");
    printf("%s\n", t4);
    free(t4);
    char *t5 = ft_strtrim("xxxx", "x");
    printf("%s\n", t5);
    free(t5);
	char *t6 = ft_strtrim("cabhellotherebcacabaa", "abc");
    printf("%s\n", t6);
    free(t6);
	char *t7 = ft_strtrim("", "x");
    printf("%s\n", t7);
    free(t7);
	char *t8 = ft_strtrim("xxxx", "");
    printf("%s\n", t8);
    free(t8);
	char *t9 = ft_strtrim(NULL, "x");
    printf("%p\n", t9);
    free(t9);
	char *t51 = ft_strtrim("xxxx", NULL);
    printf("%p\n", t51);
    free(t51);
}
