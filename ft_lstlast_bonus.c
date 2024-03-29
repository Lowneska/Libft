#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *node;

	node = lst;
	if (!node)
		return (NULL);
	while (node->next != NULL)
		node = node->next;
	return (node);
}
