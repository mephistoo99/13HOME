#include "libft.h"
#include <stdio.h>

int main()
{
    printf("%d\n", ft_memcmp("Hello", "Hello", 5));
    printf("%d\n", ft_memcmp("Hello", "Helzo", 5));
    printf("%d\n", ft_memcmp("Helzo", "Hello", 5));
    printf("%d\n", ft_memcmp("Hello", "Helzo", 3));
    printf("%d\n", ft_memcmp("Hello\0World", "Hello\0abc", 10));
    
}
