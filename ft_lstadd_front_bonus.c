#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
