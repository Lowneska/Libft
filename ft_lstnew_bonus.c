#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = (void *)content;
	node->next = NULL;
	return (node);
}
