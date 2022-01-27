#include "libft.h"

void * ft_calloc( size_t count, size_t size )
{
    char *smth;
    smth = malloc(count*size);
    if (!smth)
        return (NULL);
    ft_bzero(smth, count*size);
    return ((void *)smth);
}