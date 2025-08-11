#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	char			*trimmed_str;
	unsigned int	i;

	while (ft_strchr(set, *s1) != NULL)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
		len--;
	trimmed_str = malloc(len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed_str[i] = s1[i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}