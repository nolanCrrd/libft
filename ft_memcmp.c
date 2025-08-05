#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			i;

	i = 0;
	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	while (i < n && s1_ptr[i] == s2_ptr[i])
		i++;
	if (i == n)
		return (0);
	return (s1_ptr[i] - s2_ptr[i]);
}
