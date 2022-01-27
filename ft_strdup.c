#include "libft.h"

char * ft_strdup( const char * src )
{
    char *new_src;
    int size;

    size = ft_strlen(src);
    new_src = malloc(sizeof(char)*size +1);
    if (!new_src)
        return (NULL);
    ft_memcpy(new_src, src, size + 1);
    return (new_src);
}