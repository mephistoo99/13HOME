#include <stdio.h>
#include "libft.h"

int main()
{
    char str_chr[] = "Hello WorlWd!";
    printf("%s\n", ft_strrchr(str_chr, 'W'));
    printf("%s\n", ft_strrchr(str_chr, 'o'));
    printf("%s\n", ft_strrchr(str_chr, 'z'));
    printf("%s\n", ft_strrchr(str_chr, '\0'));
    
}
