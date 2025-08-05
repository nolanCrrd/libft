#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;
	unsigned char	car;

	i = 0;
	s_ptr = (unsigned char *) s;
	car = (unsigned char) c;
	while (i < n && s_ptr[i] != car)
	{
		i++;
	}
	if (s_ptr[i] == car)
		return ((void *) &s_ptr[i]);
	return (NULL);
}
