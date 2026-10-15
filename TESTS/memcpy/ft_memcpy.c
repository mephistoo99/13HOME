#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*source, size_t	n)
{
    const unsigned char	*ptr;
    unsigned char	*ptr2;
    if(!dest || !source)
		return (NULL);
	ptr2 = dest;
    ptr = source;
    while(n-- > 0){
        *ptr2++ = *ptr++;
    }
    return (dest);
}
