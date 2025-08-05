#include "libft.h"

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char *dst_ptr;
	const char *src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
