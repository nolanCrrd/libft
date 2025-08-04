#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	// tests ft_isalpha
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('[') == 0);
	assert(ft_isalpha('@') == 0);
	assert(ft_isalpha('~') == 0);
	// tests ft_isdigits
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('9') == 1);
	assert(ft_isdigit('5') == 1);
	assert(ft_isdigit('0' - 1) == 0);
	assert(ft_isdigit('9' + 1) == 0);
	// tests ft_isalnum
	assert(ft_isalnum('0') == 1);
	assert(ft_isalnum('9') == 1);
	assert(ft_isalnum('5') == 1);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('[') == 0);
	assert(ft_isalnum('@') == 0);
	assert(ft_isalnum('~') == 0);
	// tests ft_isascii
	assert(ft_isascii(0) == 1);
	assert(ft_isascii(127) == 1);
	assert(ft_isascii(56) == 1);
	assert(ft_isascii(-1) == 0);
	assert(ft_isascii(128) == 0);
	// tests ft_isprint
	assert(ft_isprint(32) == 1);
	assert(ft_isprint(126) == 1);
	assert(ft_isprint(127) == 0);
	assert(ft_isprint(31) == 0);
	assert(ft_isprint(-1) == 0);
	assert(ft_isprint(130) == 0);
	// test ft_strlen
	assert(ft_strlen("") == 0);
	assert(ft_strlen("1") == 1);
	assert(ft_strlen("123456789") == 9);
	assert(ft_strlen("bonjour test") == 12);
	// tests ft_memset
	char *p = malloc(10);
	ft_memset(p, 'x', 100);
	printf("%s", (char *)p);
	// test bzero
}
