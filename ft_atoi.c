#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		somme;
	
	sign = 1;
	somme = 0;
	while (*str == '\t' || *str == '\n' || *str == '\f' || *str == '\r' ||
		*str == ' ' || *str == '\v')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		somme = (somme * 10) + (*str - '0');
		str++;
	}
	return (somme * sign);
}
