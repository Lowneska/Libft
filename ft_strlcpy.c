#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t i;
	
	i = 0;
	if (len > 0)
	{
		while (src[i] && i < (len - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

