#include <stdio.h>
#include "libft.h"

int main()
{
	printf("TEST 1 :");
    char dst1[30] = "Hello ";
    printf("%zu\n", ft_strlcat(dst1, "World!", sizeof(dst1)));
    printf("%s\n", dst1);
	printf("_______________________________________\n");
	printf("TEST 2 :");
    char dst2[10] = "Hello ";
    printf("%zu\n", ft_strlcat(dst2, "World!", sizeof(dst2)));
    printf("%s\n", dst2);
	printf("_______________________________________\n");
	printf("TEST 3 :");
    char dst3[20] = "Hello ";
    printf("%zu\n", ft_strlcat(dst3, "World!", 3));
    printf("%s\n", dst3);
	printf("_______________________________________\n");
	printf("TEST 4 :");
    printf("%zu\n", ft_strlcat(NULL, NULL, 0));
    printf("%zu\n", ft_strlcat(NULL, "World", 0));
}
