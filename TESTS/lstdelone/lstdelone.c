#include <stdio.h>
#include "libft.h"

void del_content(void *content)
{
	free(content);
}

int main()
{
    char *str = ft_strdup("Node to delete");
    t_list *elem = ft_lstnew(str);
    printf("Before del: %s\n", (char *)elem->content);
    ft_lstdelone(elem, del_content);
	
}
