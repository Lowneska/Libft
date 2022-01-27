#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while ((c%256) != s[i])
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}
