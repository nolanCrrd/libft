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
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int	main(void)
{
	// tests ft_isalpha
	assert(ft_isalpha('a') == isalpha('a'));
	assert(ft_isalpha('z') == isalpha('z'));
	assert(ft_isalpha('A') == isalpha('A'));
	assert(ft_isalpha('Z') == isalpha('Z'));
	assert(ft_isalpha('[') == isalpha('['));
	assert(ft_isalpha('@') == isalpha('@'));
	assert(ft_isalpha('~') == isalpha('~'));

	// tests ft_isdigits
	assert(ft_isdigit('0') == isdigit('0'));
	assert(ft_isdigit('9') == isdigit('9'));
	assert(ft_isdigit('5') == isdigit('5'));
	assert(ft_isdigit('0' - 1) == isdigit('0' - 1));
	assert(ft_isdigit('9' + 1) == isdigit('9' + 1));

	// tests ft_isalnum
	assert(ft_isalnum('0') == isalnum('0'));
	assert(ft_isalnum('9') == isalnum('9'));
	assert(ft_isalnum('5') == isalnum('5'));
	assert(ft_isalnum('a') == isalnum('a'));
	assert(ft_isalnum('z') == isalnum('z'));
	assert(ft_isalnum('A') == isalnum('A'));
	assert(ft_isalnum('Z') == isalnum('Z'));
	assert(ft_isalnum('[') == isalnum('['));
	assert(ft_isalnum('@') == isalnum('@'));
	assert(ft_isalnum('~') == isalnum('~'));

	// tests ft_isascii
	assert(ft_isascii(0) == isascii(0));
	assert(ft_isascii(127) == isascii(127));
	assert(ft_isascii(56) == isascii(56) );
	assert(ft_isascii(-1) == isascii(-1) );
	assert(ft_isascii(128) == isascii(128));

	// tests ft_isprint
	assert(ft_isprint(32) == isprint(32));
	assert(ft_isprint(126) == isprint(126));
	assert(ft_isprint(127) == isprint(127));
	assert(ft_isprint(31) == isprint(31));
	assert(ft_isprint(-1) == isprint(-1));
	assert(ft_isprint(130) == isprint(130));

	// test ft_strlen
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("\0") == strlen("\0"));
	assert(ft_strlen("1") == strlen("1"));
	assert(ft_strlen("123456789") == strlen("123456789"));
	assert(ft_strlen("bonjour test") == strlen("bonjour test"));

	// tests ft_memset
	char *p = malloc(10);
	char *ori_p = malloc(10);
	ft_memset(p, 'x', 10);
	memset(ori_p, 'x', 10);
	assert(ft_strncmp(p, ori_p, 9) == 0);

	// test bzero
	ft_bzero(p, 10);
	bzero(ori_p, 10);
	assert(ft_strncmp(p, ori_p, 10) == 0);
	assert(p[9] == 0);
	assert(p[9] == 0);
	assert(p[5] == 0);

	// tests ft_memcpy
	char	*p2 = "test";
	p[4] = 'z';
	ft_memcpy(p, p2, 5);
	memcpy(ori_p, p2, 5);
	assert(ft_strncmp(p, ori_p, 10) == 0);
	assert(p[4] == 0);

	// tests ft_memmove
	p = malloc(10);
	p = ft_memcpy(p, "123456789", 10);
	ori_p = ft_memcpy(ori_p, "123456789", 10);
	ft_memmove(p + 2, p, 5); // On copie "abcde" à partir de p vers p+2
	memmove(ori_p + 2, ori_p, 5); // On copie "abcde" à partir de p vers p+2
	assert(ft_strncmp(p, ori_p, 9) == 0);

	// tests ft_strlcpy
	p2 = malloc(5);
	ft_strlcpy(p2, p, 5);
	strlcpy(ori_p, p, 5);
	assert(ft_strncmp(p2, ori_p, 10) == 0);
	
	// tests ft_strlcat
	p2 = malloc(20);
	ori_p = malloc(20);
	ft_strlcpy(p2, "123456789", 20);
	ft_strlcpy(ori_p, "123456789", 20);
	assert(ft_strlcat(p2, p, 15) == strlcat(ori_p, p, 15));
	assert(ft_strncmp(p2, ori_p, 20) == 0);

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

	// tests ft_memchr
	assert(ft_memchr(p2, 'l', 19) == p2 + 2);
	assert(ft_memchr(p2, 'h', 19) == p2);
	assert(ft_memchr(p2, '\0', 19) == p2 + 14);
	assert(ft_memchr(p2, 'k', 19) == NULL);

	// tests ft_memcmp
	assert(ft_memcmp(p2, "hello, world !", 14) == 0);
	assert(ft_memcmp(p2, "", 20) == 'h');
	assert(ft_memcmp(p2, "l", 20) == 'h' - 'l');
	
	// tests ft_strnstr
	assert(ft_strnstr(p2, "lo,", 20) == p2 + 3);
	assert(ft_strnstr(p2, "helllo", 20) == NULL);
	assert(ft_strnstr(p2, "!\0", 20) == p2 + 13);

	// tests ft_atoi
	assert(atoi("0") == ft_atoi("0"));
	assert(atoi("-0") == ft_atoi("-0"));
	assert(atoi("+0") == ft_atoi("+0"));
	assert(atoi("--1") == ft_atoi("--1"));
	assert(atoi("++1") == ft_atoi("++1"));
	assert(atoi("       \t\v\n +999") == ft_atoi("       \t\v\n +999"));
	assert(atoi("       \t\v\n -999") == ft_atoi("       \t\v\n -999"));
	assert(atoi("       \t\v\n ++999") == ft_atoi("       \t\v\n ++999"));
	assert(atoi("       \t\v\n --999") == ft_atoi("       \t\v\n --999"));
	assert(atoi("       \t\v\n -2147483648") == ft_atoi("       \t\v\n -2147483648"));
	assert(atoi("       \t\v\n +2147483648") == ft_atoi("       \t\v\n +2147483648"));
	assert(atoi("       \t\v\n +2147483647") == ft_atoi("       \t\v\n +2147483647"));

	// tests ft_calloc
	int	*p3 = calloc(10, 4); //10 int de 4 octets
	int	*p4 = ft_calloc(10, 4);
	assert(ft_memcmp(p3, p4, 40) == 0);
	p3 = calloc(10, 0);
	p4 = ft_calloc(10, 0);
	assert(ft_memcmp(p3, p4, 0) == 0);
	p3 = calloc(0, 0);
	p4 = ft_calloc(0, 0);
	assert(ft_memcmp(p3, p4, 0) == 0);
	// p3 = calloc(-1, -1);
	// p4 = ft_calloc(-1, -1);
	// assert(ft_memcmp(p3, p4, 0) == 0);
	// p3 = calloc(-1, 1);
	// p4 = ft_calloc(-1, 1);
	// assert(ft_memcmp(p3, p4, 0) == 0);

	// tests ft_strdup
	assert(ft_strncmp(ft_strdup("test"), strdup("test"), 5) == 0);
	assert(ft_strncmp(ft_strdup(""), strdup(""), 0) == 0);
	assert(ft_strncmp(ft_strdup("\0"), strdup("\0"), 0) == 0);
	char	*dup = malloc(10000000);
	ft_memset(dup, 'x', 1000000);
	assert(ft_strncmp(ft_strdup(dup), strdup(dup), 0) == 0);

	// tests ft_substr
	assert(ft_strncmp(ft_substr("test", 2, 1), "s", 10) == 0);
	assert(ft_strncmp(ft_substr("test", 2, 2), "st", 10) == 0);
	assert(ft_strncmp(ft_substr("test", 2, 3), "st", 10) == 0);
	assert(ft_strncmp(ft_substr("test", 3, 3), "t", 10) == 0);
	assert(ft_strncmp(ft_substr("test", 2, 0), "", 10) == 0);
	assert(ft_substr("test", -1, -1)[0] == '\0');
	assert(ft_strncmp(ft_substr("test", 0, -1), "test", 10) == 0);
	assert(ft_substr(NULL, 10, 10) == NULL);
	assert(ft_strncmp(ft_substr("", 0, 10), "", 10) == 0);
	assert(ft_strncmp(ft_substr("test", 0, 10), "test", 10) == 0);
	assert(ft_strncmp(ft_substr("test", UINT_MAX, 10), "", 10) == 0);

	// tests ft_strjoin
	assert(ft_strncmp(ft_strjoin("test", ""), "test", 100) == 0);
	assert(ft_strncmp(ft_strjoin("", ""), "", 100) == 0);
	assert(ft_strncmp(ft_strjoin("\n\t\v", ""), "\n\t\v", 100) == 0);
	// assert(ft_strncmp(ft_strjoin(NULL, ""), "", 100) == 0);
	assert(ft_strncmp(ft_strjoin("", ""), "", 100) == 0);

	// tests ft_strtrim
	assert(ft_strncmp(ft_strtrim("  cacaboudinccc aac", " ca"), "boudin", 6) == 0);
	assert(ft_strncmp(ft_strtrim("  cacabouca dinccc aac", " ca"), "bouca din", 9) == 0);
	assert(ft_strncmp(ft_strtrim("test", ""), "test", 9) == 0);
	assert(ft_strncmp(ft_strtrim("\0", " ca"), "", 9) == 0);
	// assert(ft_strncmp(ft_strtrim(NULL, " ca"), "bouca din", 9) == 0);
	// assert(ft_strncmp(ft_strtrim("  cacaboudinccc aac", NULL), "boudin", 6) == 0);

	// tests ft_split
	char 	**list = ft_split(",,,test, test,,, caca,,,,c,,,", ',');
	char	*test_list[] = {"test", " test", " caca", "c"};
	for (int i = 0; list[i] != NULL; i++)
	{
		assert(ft_strncmp(list[i], test_list[i], 100) == 0);
	}
	list = ft_split("\0", 'c');
	assert(list[0] == NULL);
	list = ft_split("t", ',');
	assert(ft_strncmp(list[0], "t", 100) == 0);
	list = ft_split(",t,", ',');
	assert(ft_strncmp(list[0], "t", 100) == 0);
	// list = NULL;
	// assert(ft_strncmp(list[0], test_list[0], 100) == 0);

	// tests itoa
	assert(ft_strncmp(ft_itoa(-0), "0", 12) == 0);
	assert(ft_strncmp(ft_itoa(-10), "-10", 12) == 0);
	assert(ft_strncmp(ft_itoa(12341234), "12341234", 12) == 0);
	assert(ft_strncmp(ft_itoa(-2147483648), "-2147483648", 12) == 0);
	assert(ft_strncmp(ft_itoa(2147483647), "2147483647", 12) == 0);
	assert(ft_strncmp(ft_itoa(-12341234), "-12341234", 12) == 0);
}
