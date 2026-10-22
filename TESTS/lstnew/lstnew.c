#include <stdio.h>
#include "libft.h"

int main()
{
    t_list *node1 = ft_lstnew("Hello Node");
    if (node1)
    {
        printf("%s\n", (char *)node1->content);
        printf("%p\n", (void *)node1->next);
        free(node1);
    }

    int val = 42;
    t_list *node2 = ft_lstnew(&val);
    if (node2)
    {
        printf("%d\n", *(int *)node2->content);
        printf("%p\n", (void *)node2->next);
        free(node2);
    }

    t_list *node3 = ft_lstnew(NULL);
    if (node3)
    {
        printf("%p\n", node3->content);
        printf("%p\n", (void *)node3->next);
        free(node3);
    }
}
