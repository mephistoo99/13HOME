#include "libft.h"
#include <stdio.h>

int main()
{
    t_list *head = NULL;
    t_list *last_node;

    last_node = ft_lstlast(head);
    if (last_node == NULL)
        printf("Empty list: NULL\n");

    t_list *elem1 = ft_lstnew("First");
    t_list *elem2 = ft_lstnew("Second");
    t_list *elem3 = ft_lstnew("Last");

    ft_lstadd_front(&head, elem1);
    last_node = ft_lstlast(head);
    printf("%s\n", (char *)last_node->content);

    ft_lstadd_front(&head, elem2);
    ft_lstadd_front(&head, elem3);
    last_node = ft_lstlast(head);
    printf("%s\n", (char *)last_node->content);

    free(elem1);
    free(elem2);
    free(elem3);
    
}
