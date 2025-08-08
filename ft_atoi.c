#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	i;

	sum = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return (sum * ((*str == '-') * -2 + 1));
}