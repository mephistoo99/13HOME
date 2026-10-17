#include <stdio.h>
#include "libft.h"

int main()
{
	
    printf("%d\n", ft_strncmp("Hello", "Hello", 5));
    printf("%d\n", ft_strncmp("Hello", "Helzo", 5));
    printf("%d\n", ft_strncmp("Helzo", "Hello", 5));
    printf("%d\n", ft_strncmp("Hello", "Helzo", 3));
    printf("%d\n", ft_strncmp("Hello", "Hello World", 5));
    printf("%d\n", ft_strncmp("Hello", "Hello World", 10));
}
