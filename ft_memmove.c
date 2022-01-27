#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char buff[len];
	ft_memcpy(buff, src, len);
	ft_memcpy(dst, buff, len);
	return (dst);
}
