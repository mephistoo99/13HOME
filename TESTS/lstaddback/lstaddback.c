#include <stdio.h>
#include "libft.h"

int main()
{
    t_list *head = NULL;

    t_list *elem1 = ft_lstnew("First");
    t_list *elem2 = ft_lstnew("Second");
    t_list *elem3 = ft_lstnew("Last");

    ft_lstadd_back(&head, elem1);
    ft_lstadd_back(&head, elem2);
    ft_lstadd_back(&head, elem3);

    t_list *curr = head;
    while (curr)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    free(elem1);
    free(elem2);
    free(elem3);
}
