#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *ptr;
	size_t i;

	ptr = pointer;
	i = 0;
	while (i < count)
	{
		*ptr++ = value;
		i++;
	}
	return (pointer);
}
