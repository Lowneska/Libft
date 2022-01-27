#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *copy;

	if (!alst)
		return ;
	copy = *alst;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	if (copy)
	{
		while (copy->next)
			copy = copy->next;
		copy->next = new;
	}
}
