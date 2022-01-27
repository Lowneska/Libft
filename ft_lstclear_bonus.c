#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		temp = node->next;
		del(node->content);
		free(node);
		node = temp;
	}
	*lst = NULL;
}
