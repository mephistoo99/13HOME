#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (*s++)
	{
		len++;
	}
	return (len);
}


int main()
{
    char dst1[20];
    printf("%zu\n", ft_strlcpy(dst1, "Hello World!", sizeof(dst1)));
    printf("%s\n", dst1);
    char dst2[5];
    printf("%zu\n", ft_strlcpy(dst2, "Hello World!", sizeof(dst2)));
    printf("%s\n", dst2);
    
}
