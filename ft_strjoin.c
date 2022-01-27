#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*c;
	unsigned int		i;
	unsigned int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(c = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
		ft_strlen(s2) + 1))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		c[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}
