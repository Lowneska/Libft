#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	char		*d; //pour deferencer le pointeur
	const char	*s;
	unsigned int i;

	d = dst;
	s = src;

	i = 0;
	while (i < size)
	{
		*d++ = *s++;
		i++;
	}
	return (dst);
}
