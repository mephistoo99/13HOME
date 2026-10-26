#include "libft.h"
void *uppercase_content(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    if (!new_str)
        return (NULL);
    
    int i = 0;
    while (new_str[i])
    {
        if (new_str[i] >= 'a' && new_str[i] <= 'z')
            new_str[i] -= 32;
        i++;
    }
    return (new_str);
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("hello"));
    ft_lstadd_back(&head, ft_lstnew("world"));
    ft_lstadd_back(&head, ft_lstnew("libft"));

    // Map the original list to create a brand new list with transformed content
    t_list *mapped_list = ft_lstmap(head, uppercase_content, del_content);

    // Print the new mapped list
    t_list *curr = mapped_list;
    while (curr)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    // Clean up both lists
    // 1. Original list used static strings, so we only free the nodes (no-op del)
    // 2. Mapped list used strdup, so we use del_content to free node content
    ft_lstclear(&head, NULL);
    ft_lstclear(&mapped_list, del_content);

}
