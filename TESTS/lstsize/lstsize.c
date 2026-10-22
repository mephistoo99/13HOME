#include <stdio.h>
#include "libft.h"

int main()
{
    t_list *head = NULL;
    printf("%d\n", ft_lstsize(head));

    t_list *elem1 = ft_lstnew("Node 1");
    t_list *elem2 = ft_lstnew("Node 2");
    t_list *elem3 = ft_lstnew("Node 3");

    ft_lstadd_front(&head, elem1);
    printf("%d\n", ft_lstsize(head));

    ft_lstadd_front(&head, elem2);
    ft_lstadd_front(&head, elem3);
    printf("%d\n", ft_lstsize(head));

    free(elem1);
    free(elem2);
    free(elem3);

}
