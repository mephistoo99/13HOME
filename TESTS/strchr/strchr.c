#include <stdio.h>
#include "libft.h"

int main()
{
    char str_chr[] = "Hello World!";
    printf("%s\n", ft_strchr(str_chr, 'W'));
    printf("%s\n", ft_strchr(str_chr, 'o'));
    printf("%s\n", ft_strchr(str_chr, 'z'));
    printf("%s\n", ft_strchr(str_chr, '\0'));
    
}
