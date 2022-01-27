#include "libft.h"

int word_count(char *s, char c)
{
	int	j;

	j = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	return (j);
}

char    *create_word(char   *s1, char c)
{
    int		i;
	char	*word;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	if (!(word = (char *)malloc((sizeof(char) * (i + 1)))))
		return (NULL);
	i = 0;
	while (s1[i] && s1[i] != c)
	{
		word[i] = s1[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s1, char c)
{
    char    *s;
    int nb_word;
    int i;
    char    **tab;
    
    s = (char *)s1;
    i = 0;
    nb_word = word_count(s, c);
    if(!(tab = malloc(sizeof(char *)* (nb_word+1))))
		return (NULL);
    while(*s)
    {
        while (*s == c)
            s++;
        if (*s && *s != c)
        {
            tab[i] = create_word(s, c);
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    tab[i] = '\0';
    return (tab);
}