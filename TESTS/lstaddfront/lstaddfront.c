#include <stdio.h>
#include "libft.h"

int main()
{
    t_list *head = NULL;
    t_list *elem1 = ft_lstnew("World!");
    t_list *elem2 = ft_lstnew("Hello ");

    ft_lstadd_front(&head, elem1);
    ft_lstadd_front(&head, elem2);

    t_list *curr = head;
    while (curr)
    {
        printf("%s", (char *)curr->content);
        curr = curr->next;
    }
    printf("\n");

    free(elem1);
    free(elem2);
}
