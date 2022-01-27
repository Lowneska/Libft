#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d;
	const char	*s;
	long unsigned int	i;

	d = dst;
	s = src;	
	i = 0;
	while (i < n)
	{
		*d = *s;
		if (*s++ == (unsigned char)c)
			return (d++);
		i++;
	}
	return (NULL);
}
