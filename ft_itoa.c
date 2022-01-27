#include "libft.h"
int ft_size(int n)
{
    int i;
    int tmp;

    i = 0;
    tmp = n;
    if (n == 0)
        return (1);
    if (tmp < 0)
        i++;
    while(tmp)
    {
        tmp = tmp/10;
        i++;
    }
    return (i);
}
char *ft_itoa(int n)
{
    int tmp;
    char    *c;
    int size;
    tmp = n;
    size = ft_size(n);
    
    if (!(c = (char *)malloc(sizeof(char) * (size + 1))))
		    return (NULL);
    if (tmp == -2147483648)
		return (ft_memcpy(c, "-2147483648", size+1));
    if (n == 0)
        return (ft_memcpy(c, "0", 2));
    if (n < 0)
    {
        c[0] = '-';
		tmp *= -1;
    }
    c[size--] = '\0';
    while (tmp)
    {
        c[size--] = '0' + (tmp % 10);
        tmp = tmp/10;
    }
    return (c);
}
