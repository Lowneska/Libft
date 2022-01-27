#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while ((c%256) != s[len - i]) //256 nombre de caractères ascii
	{
		if ((len - i) < 0)
			return (NULL);
		i++;
	}
	return ((char *)s + (len - i));
}