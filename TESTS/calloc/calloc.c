#include "libft.h"
#include <stdio.h>

int main()
{
    int *carr1 = (int *)ft_calloc(5, sizeof(int));
    if (carr1)
    {
        printf("%d %d %d %d %d\n", carr1[0], carr1[1], carr1[2], carr1[3], carr1[4]);
        free(carr1);
    }
    /*char *carr2 = (char *)ft_calloc(0, sizeof(char));
    if (carr2)
    {
        printf("Zero alloc successful\n");
        free(carr2);
    }*/
}
