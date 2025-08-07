/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:32:58 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/07 19:06:06by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_memset(p, 'x', 10);
	assert(ft_strncmp(p, "xxxxxxxxxx", 10) == 0);

	// test bzero
	ft_bzero(p, 10);
	assert(ft_strncmp(p, "", 10) == 0);
	assert(p[10] == 0);
	assert(p[9] == 0);
	assert(p[5] == 0);

	// tests ft_memcpy
	char	*p2 = "test";
	p[4] = 'z';
	ft_memcpy(p, p2, 5);
	assert(ft_strncmp(p, p2, 10) == 0);
	assert(p[4] == 0);

	// tests ft_memmove
	free(p);
	p = malloc(10);
	p = ft_memcpy(p, "123456789", 9);
	ft_memmove(p + 2, p, 5); // On copie "abcde" à partir de p vers p+2
	assert(ft_strncmp(p, "121234589", 10) == 0);

	// tests ft_strlcpy
	p2 = malloc(5);
	ft_strlcpy(p2, p, 5);
	assert(ft_strncmp(p2, "1212", 5) == 0);

	// tests ft_strlcat
	free(p2);
	p2 = malloc(20);
	ft_strlcpy(p2, "123456789", 20);
	assert(ft_strlcat(p2, p, 15) == 18);
	assert(ft_strncmp(p2, "12345678912123", 20) == 0);

	// tests ft_toupper
	ft_strlcpy(p2, "hello, world !", 20);
	for (int i = 0; p2[i]; i++)
		p2[i] = ft_toupper(p2[i]);
	assert(ft_strncmp(p2, "HELLO, WORLD !", 20) == 0);

	// tests ft_tolower
	ft_strlcpy(p2, "HELLO, WORLD !", 20);
	for (int i = 0; p2[i]; i++)
		p2[i] = ft_tolower(p2[i]);
	assert(ft_strncmp(p2, "hello, world !", 20) == 0);

	// tests ft_strchr
	assert(ft_strchr(p2, 'l') == p2 + 2);
	assert(ft_strchr(p2, 'k') == NULL);
	assert(ft_strchr(p2, '\0') == p2 + 14);

	// tests ft_strrchr
	assert(ft_strrchr(p2, 'l') == p2 + 10);
	assert(ft_strrchr(p2, 'k') == NULL);
	assert(ft_strrchr(p2, '\0') == p2 + 14);

	// test ft_strncmp
	assert(ft_strncmp(p2, "hello, world !", 20) == 0);
	assert(ft_strncmp(p2, "", 20) == 'h');
	assert(ft_strncmp(p2, "l", 20) == 'h' - 'l');

	// tests memchr
	assert(ft_memchr(p2, 'l', 20) == p2 + 2);
	assert(ft_memchr(p2, 'h', 20) == p2);
	assert(ft_memchr(p2, '\0', 20) == p2 + 14);
	assert(ft_memchr(p2, 'k', 20) == NULL);

	// tests memcmp
	assert(ft_memcmp(p2, "hello, world !", 14) == 0);
	assert(ft_memcmp(p2, "", 20) == 'h');
	assert(ft_memcmp(p2, "l", 20) == 'h' - 'l');
	
	// tests strnstr
	assert(ft_strnstr(p2, "lo,", 20) == p2 + 3);
	assert(ft_strnstr(p2, "helllo", 20) == NULL);
	assert(ft_strnstr(p2, "!\0", 20) == p2 + 13);

}
