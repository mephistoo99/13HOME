
#include <stdio.h>
#include "libft.h" 
void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 1")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));
    printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	ft_lstclear(&head, del_content);
    if (head == NULL)
        printf("List cleared successfully! Head is NULL.\n");
}
