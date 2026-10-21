#include <stdio.h>
#include "libft.h"

void test_iter_upper(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void test_iter_lower(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'A' && *c <= 'Z')
        *c = *c + 32;
}

int main()
{
    char str_iter1[] = "hello world!";
    ft_striteri(str_iter1, test_iter_upper);
    printf("%s\n", str_iter1);

    char str_iter2[] = "HELLO WORLD!";
    ft_striteri(str_iter2, test_iter_lower);
    printf("%s\n", str_iter2);
}
