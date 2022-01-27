#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char    *chaine;
    unsigned int size;

    i = 0;
    if ((len == 0) || (start > len) || (start > ft_strlen(s)))
        chaine = malloc(sizeof(char));
    else 
    {
        if ((ft_strlen(s) - start) > len)
            size = len;
        else 
            size = ft_strlen(s) - start;
        chaine = malloc(sizeof(char)*(size+1));
        if (!chaine)
            return (NULL);
        while((i < len) && s[i])
        {
            chaine[i] = s[i+start];
            i++;
        }
    }
    chaine[i] = '\0';
    return (chaine);
}