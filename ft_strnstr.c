#include "libft.h"

char	*ft_strnstr(const char *big, const char *smol, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*find;

	str = (char *)big;
	find = (char *)smol;
	i = 0;
	if (ft_strncmp(find, "", 1) == 0)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] == str[i + j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
