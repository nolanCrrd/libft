#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char car = c;
	unsigned char *ptr = b;

	i = 0;
	while (i < len)
		ptr[i++] = car;
	return (b);
}
