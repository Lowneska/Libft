#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const char *s;

	s = src;
	long unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*s == (c%256))
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
