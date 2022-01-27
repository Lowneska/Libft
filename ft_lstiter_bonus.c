#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *node;

	node = lst;
	if (!f || !lst)
		return ;
	while (node)
	{
		f(node->content);
		node = node->next;
	}
}
