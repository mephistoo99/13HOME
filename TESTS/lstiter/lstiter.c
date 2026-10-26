#include <stdio.h>
#include "libft.h"

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *head = NULL;

    t_list *elem1 = ft_lstnew("First Node");
    t_list *elem2 = ft_lstnew("Second Node");
    t_list *elem3 = ft_lstnew("Third Node");

    ft_lstadd_back(&head, elem1);
    ft_lstadd_back(&head, elem2);
    ft_lstadd_back(&head, elem3);
	
    ft_lstiter(head, print_content);

    free(elem1);
    free(elem2);
    free(elem3);
}
