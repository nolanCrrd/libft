#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
