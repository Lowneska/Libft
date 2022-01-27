#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list *copy;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	copy = lst;
	new = NULL;
	while (copy)
	{
		lstadd_back(&new, lstnew(f(copy->content)));
		copy = copy->next;
	}
	return (new);
}
