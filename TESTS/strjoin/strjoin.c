#include <stdio.h>
#include "libft.h"

int main()
{
    char *j1 = ft_strjoin("Hello ", "World!");
    printf("%s\n", j1);
    free(j1);
    char *j2 = ft_strjoin("", "World!");
    printf("%s\n", j2);
    free(j2);
    char *j3 = ft_strjoin("Hello ", "");
    printf("%s\n", j3);
    free(j3);
    char *j4 = ft_strjoin("", "");
    printf("%s\n", j4);
    free(j4);
	char *j5 = ft_strjoin(NULL, "");
    printf("%p\n", j5);
    free(j5);
}
