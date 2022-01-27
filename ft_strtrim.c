#include "libft.h"

int istrimmed(char c, char const *set)
{
	const char	*s;
    int j;

    j = 0;
    s = set;
    while (s[j])
    {
        if (c == s[j])
            return (1);
        j++;
    }
    return (0);
}

int ft_size(char const *s1, char const *set)
{
    int i;
    int j;
    const char	*s;

    i = 0;
    j = 0;
    s = s1;
    while(s[j])
    {
        if(!istrimmed(s[j], set))
            i++;
        j++;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *new_string;
    int i;
    int j;
    int size;
    const char	*s;

    i = 0;
    j = 0;
    s = s1;
    size = ft_size(s, set);
    new_string = malloc(sizeof(char)*(size+1));
    new_string[size-1]= '\0';
    while(s[j])
    {
        if(!istrimmed(s[j], set))
        {
            new_string[i] = s[j];
            i++;
        }
        j++;;
    }
    return (new_string);
}