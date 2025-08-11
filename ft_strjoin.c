#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			total_len;
	char			*str;
	unsigned int	i;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(total_len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}