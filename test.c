/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:18:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/15 10:54:35 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <libc.h>
#include <assert.h>
#include <stdlib.h>

char	ft_toupper_worker(unsigned int i, char c)
{
	(void) i;
	return toupper(c);
}

void	ft_toupper_iteri_worker(unsigned int i, char *c)
{
	(void) i;
	*c = toupper(*c);
}
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	// tests ft_isalpha
	assert(ft_isalpha('a') == isalpha('a'));
	assert(ft_isalpha('z') == isalpha('z'));
	assert(ft_isalpha('m') == isalpha('m'));
	assert(ft_isalpha('A') == isalpha('A'));
	assert(ft_isalpha('Z') == isalpha('Z'));
	assert(ft_isalpha('M') == isalpha('M'));
	assert(ft_isalpha(' ') == isalpha(' '));
	assert(ft_isalpha(564) == isalpha(564));
	assert(ft_isalpha(-564) == isalpha(-564));
	assert(ft_isalpha(3) == isalpha(3));
	
	// tests ft_isdigit
	assert(ft_isdigit('a') == isdigit('a'));
	assert(ft_isdigit('z') == isdigit('z'));
	assert(ft_isdigit('A') == isdigit('A'));
	assert(ft_isdigit('Z') == isdigit('Z'));
	assert(ft_isdigit(' ') == isdigit(' '));
	assert(ft_isdigit('0') == isdigit('0'));
	assert(ft_isdigit('9') == isdigit('9'));
	assert(ft_isdigit('5') == isdigit('5'));
	assert(ft_isdigit(564) == isdigit(564));
	assert(ft_isdigit(-564) == isdigit(-564));
	assert(ft_isdigit(3) == isdigit(3));

	// tests ft_isalnum
	assert(ft_isalnum('a') == isalnum('a'));
	assert(ft_isalnum('z') == isalnum('z'));
	assert(ft_isalnum('A') == isalnum('A'));
	assert(ft_isalnum('Z') == isalnum('Z'));
	assert(ft_isalnum(' ') == isalnum(' '));
	assert(ft_isalnum('0') == isalnum('0'));
	assert(ft_isalnum('9') == isalnum('9'));
	assert(ft_isalnum('5') == isalnum('5'));
	assert(ft_isalnum(564) == isalnum(564));
	assert(ft_isalnum(-564) == isalnum(-564));
	assert(ft_isalnum(3) == isalnum(3));

	// tests ft_isprint
	assert(ft_isprint('a') == isprint('a'));
	assert(ft_isprint('z') == isprint('z'));
	assert(ft_isprint('A') == isprint('A'));
	assert(ft_isprint('Z') == isprint('Z'));
	assert(ft_isprint(' ') == isprint(' '));
	assert(ft_isprint('0') == isprint('0'));
	assert(ft_isprint('9') == isprint('9'));
	assert(ft_isprint('5') == isprint('5'));
	assert(ft_isprint(564) == isprint(564));
	assert(ft_isprint(-564) == isprint(-564));
	assert(ft_isprint(3) == isprint(3));

	// tests ft_isascii
	assert(ft_isascii('a') == isascii('a'));
	assert(ft_isascii('z') == isascii('z'));
	assert(ft_isascii('A') == isascii('A'));
	assert(ft_isascii('Z') == isascii('Z'));
	assert(ft_isascii(' ') == isascii(' '));
	assert(ft_isascii('0') == isascii('0'));
	assert(ft_isascii('9') == isascii('9'));
	assert(ft_isascii('5') == isascii('5'));
	assert(ft_isascii(564) == isascii(564));
	assert(ft_isascii(-564) == isascii(-564));
	assert(ft_isascii(3) == isascii(3));

	// tests ft_strlen
	assert(ft_strlen("") == strlen(""));
	assert(ft_strlen("\0") == strlen("\0"));
	assert(ft_strlen("test") == strlen("test"));
	assert(ft_strlen("test\n\0") == strlen("test\n\0"));
	assert(ft_strlen("\n") == strlen("\n"));

	// tests memset
	void	*ft_ptr;
	void	*ori_ptr;
	ft_ptr = malloc(10);
	ori_ptr = malloc(10);
	assert(memcmp(ft_memset(ft_ptr, 'a', 10), memset(ori_ptr, 'a', 10), 10) == 0);
	assert(memcmp(ft_memset(ft_ptr, 'a', 0), memset(ori_ptr, 'a', 0), 10) == 0);
	assert(memcmp(ft_memset(ft_ptr, 0, 9), memset(ori_ptr, 0, 9), 9) == 0);
	assert(memcmp(ft_memset(ft_ptr, 'a', 9), memset(ori_ptr, 'a', 9), 9) == 0);

	// tests bzero
	ft_bzero(ft_ptr, 9);
	bzero(ori_ptr, 9);
	assert(memcmp(ft_ptr, ori_ptr, 10) == 0);
	ft_bzero(ft_ptr, 10);
	bzero(ori_ptr, 10);
	assert(memcmp(ft_ptr, ori_ptr, 10) == 0);

	// tests memcpy
	char	*ori_dst = strdup("poop");
	char	*ori_src = "test";
	char	*ft_dst = ft_strdup("poop");
	char	*ft_src = "test";
	assert(ori_dst == memcpy(ori_dst, ori_src, 4));
	assert(ft_dst == ft_memcpy(ft_dst, ft_src, 4));
	assert(memcmp(ft_memcpy(ft_dst, ft_src, 4), memcpy(ori_dst, ori_src, 4), 4) == 0);
	assert(memcmp(ori_dst, ft_dst, 4) == 0);
	ft_src = "oops";
	ori_src = "oops";
	assert(memcmp(ft_memcpy(ft_dst, ft_src, 1), memcpy(ori_dst, ori_src, 1), 4) == 0);
	assert(memcmp(ori_dst, ft_dst, 4) == 0);
	ft_src = "test";
	ori_src = "test";
	assert(memcmp(ft_memcpy(ft_dst, ft_src, 0), memcpy(ori_dst, ori_src, 0), 4) == 0);
	assert(memcmp(ori_dst, ft_dst, 4) == 0);
	free(ori_dst);
	free(ft_dst);
	
	// tests ft_memmove
	ori_src = ft_strdup("Hello, World!");
	ori_dst = &ori_src[5];
	ft_src = ft_strdup("Hello, World!");
	ft_dst = &ft_src[5];
	assert(ft_memcmp(ft_memmove(ft_dst, ft_src, 14), memmove(ori_dst, ori_src, 14), 14) == 0);
	assert(ft_strncmp(ori_dst, ft_dst, 20) == 0);
	printf("%s : %s", ft_substr(ori_src, 0, 14), ft_substr(ft_src, 0,14));
	// assert(ft_strncmp(ori_src, ft_src, 20) == 0);

	// tests ft_strlcpy

	// tests ft_strlcat

	// tests ft_toupper
	assert(ft_toupper(12) == toupper(12));
	assert(ft_toupper(127) == toupper(127));
	assert(ft_toupper('a') == toupper('a'));
	assert(ft_toupper('A') == toupper('A'));
	assert(ft_toupper('z') == toupper('z'));
	assert(ft_toupper('Z') == toupper('Z'));
	assert(ft_toupper('m') == toupper('m'));
	assert(ft_toupper('M') == toupper('M'));
	assert(ft_toupper(-1) == toupper(-1));

	// tests ft_tolower
	assert(ft_tolower(12) == tolower(12));
	assert(ft_tolower(127) == tolower(127));
	assert(ft_tolower('a') == tolower('a'));
	assert(ft_tolower('A') == tolower('A'));
	assert(ft_tolower('z') == tolower('z'));
	assert(ft_tolower('Z') == tolower('Z'));
	assert(ft_tolower('m') == tolower('m'));
	assert(ft_tolower('M') == tolower('M'));
	assert(ft_tolower(-1) == tolower(-1));

	// tests ft_strchr
	char	*str = "test";
	assert(ft_strchr(str, 't') == strchr(str, 't'));
	assert(ft_strchr(str, 's') == strchr(str, 's'));
	assert(ft_strchr(str, '\0') == strchr(str, '\0'));
	assert(ft_strchr(str, '\n') == strchr(str, '\n'));
	assert(ft_strchr(str, ' ') == strchr(str, ' '));
	assert(ft_strchr(str, -1) == strchr(str, -1));

	// tests ft_strrchr
	assert(ft_strrchr(str, 't') == strrchr(str, 't'));
	assert(ft_strrchr(str, 's') == strrchr(str, 's'));
	assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));
	assert(ft_strrchr(str, '\n') == strrchr(str, '\n'));
	assert(ft_strrchr(str, ' ') == strrchr(str, ' '));
	assert(ft_strrchr(str, -1) == strrchr(str, -1));
	
	// tests ft_strncmp
	char	*str2 = "test2";
	assert(ft_strncmp(str, str2, 6) == strncmp(str, str2, 6));
	assert(ft_strncmp(str, str2, 0) == strncmp(str, str2, 0));
	assert(ft_strncmp(str, str2, 10) == strncmp(str, str2, 10));
	assert(ft_strncmp(str, "", 10) == strncmp(str, "", 10));

	// tests ft_memchr
	int	int_lst[10] = {1, 2, 1, 1, 2, 3, 4, 21, 54, 657};
	assert(ft_memchr(int_lst, 2, 10) == memchr(int_lst, 2, 10));
	assert(ft_memchr(int_lst, 657, 10) == memchr(int_lst, 657, 10));
	assert(ft_memchr(int_lst, 1, 10) == memchr(int_lst, 1, 10));
	assert(ft_memchr(int_lst, 543242, 10) == memchr(int_lst, 543242, 10));

	// tests ft_memcmp
	int	int_lst2[10] = {1, 2, 1, 1, 2, 3, 4, 45, 54, 657};
	assert(ft_memcmp(int_lst2, int_lst2, 4) == memcmp(int_lst2, int_lst2, 4));
	assert(ft_memcmp(int_lst2, int_lst2, 0) == memcmp(int_lst2, int_lst2, 0));
	assert(ft_memcmp(int_lst2, int_lst2, 10) == memcmp(int_lst2, int_lst2, 10));
	assert(ft_memcmp(int_lst2, int_lst2, 1) == memcmp(int_lst2, int_lst2, 1));
	
	// tests ft_strnstr
	str = "Hello, world!";
	assert(ft_strnstr(str, "Wo", 14) == strnstr(str, "Wo", 14));
	assert(ft_strnstr(str, "wo", 14) == strnstr(str, "wo", 14));
	assert(ft_strnstr(str, "l", 14) == strnstr(str, "l", 14));
	assert(ft_strnstr(str, "test", 14) == strnstr(str, "test", 14));
	assert(ft_strnstr(str, "", 14) == strnstr(str, "", 14));
	assert(ft_strnstr(str, "\0", 14) == strnstr(str, "\0", 14));

	// tests ft_atoi
	assert(ft_atoi("    1234") == atoi("    1234"));
	assert(ft_atoi("   \n\t 1234") == atoi("   \n\t 1234"));
	assert(ft_atoi("   \n\t 1234") == atoi("   \n\t 1234"));
	assert(ft_atoi("   a 1234") == atoi("   a 1234"));
	assert(ft_atoi("asd") == atoi("asd1234"));
	assert(ft_atoi("a1234") == atoi("a1234"));
	assert(ft_atoi("a1234a") == atoi("a1234a"));
	assert(ft_atoi("a1234 \n\t") == atoi("a1234 \n\t"));
	assert(ft_atoi("1234") == atoi("1234"));
	assert(ft_atoi("") == atoi(""));

	// tests ft_calloc
	assert(ft_memcmp(ft_calloc(10, 10), calloc(10, 10), 100) == 0);
	assert(ft_memcmp(ft_calloc(1, 1), calloc(1,1), 1) == 0);
	
	// tests ft_strdup
	// assert(ft_strncmp(ft_strdup("test"), strdup("test"), 5) == 0);
	assert(ft_strncmp(ft_strdup(""), strdup(""), 0) == 0);
	assert(ft_strncmp(ft_strdup("test\n"), strdup("test\n"), 6) == 0);
	assert(ft_strncmp(ft_strdup("test\0"), strdup("test\0"), 6) == 0);

	// tests ft_substr
	assert(ft_strncmp(ft_substr("Hello, World!", 7, 6), "World!", 7) == 0);
	assert(ft_strncmp(ft_substr("Hello, World!", 8, 5), "orld!", 6) == 0);
	assert(ft_strncmp(ft_substr("Hello, World!", 0, 13), "Hello, World!", 12) == 0);
	assert(ft_strncmp(ft_substr("Hello, World!", 0, 1), "H", 2) == 0);

	// tests ft_strjoin
	assert(ft_strncmp(ft_strjoin("Hello, ", "World!"), "Hello, World!", 13) == 0);
	assert(ft_strncmp(ft_strjoin("Hello, ", ""), "Hello, ", 13) == 0);
	assert(ft_strncmp(ft_strjoin("", "World!"), "World!", 13) == 0);
	assert(ft_strncmp(ft_strjoin("", "\0"), "", 13) == 0);

	// tests ft_strtrim
	assert(ft_strncmp(ft_strtrim("  \n\tvvvtestvv\n\t  ", "\n\tv "), "test", 10) == 0);
	assert(ft_strncmp(ft_strtrim("  \n\tvvvtestvv\n\t  ", "\n\tv"), "  \n\tvvvtestvv\n\t  ", 20) == 0);
	assert(ft_strncmp(ft_strtrim("  \n\tvvvtestvv \n\t", "\n\tv"), "  \n\tvvvtestvv ", 20) == 0);

	// tests ft_split
	char	**strs = ft_split(",,, , dfs,,fdsfsd,fdsfdss,,,,,fdsfds,,", ',');
	assert(ft_strncmp(" ", strs[0], 10) == 0);
	assert(ft_strncmp(" dfs", strs[1], 10) == 0);
	assert(ft_strncmp("fdsfsd", strs[2], 10) == 0);
	assert(ft_strncmp("fdsfdss", strs[3], 10) == 0);
	assert(ft_strncmp("fdsfds", strs[4], 10) == 0);
	assert(strs[5] == NULL);

	// tests ft_itoa
	assert(ft_strncmp("0", ft_itoa(0), 10) == 0);
	assert(ft_strncmp("0", ft_itoa(-0), 10) == 0);
	assert(ft_strncmp("-10", ft_itoa(-10), 10) == 0);
	assert(ft_strncmp("-2147483648", ft_itoa(-2147483648), 12) == 0);
	assert(ft_strncmp("2147483647", ft_itoa(2147483647), 12) == 0);
	assert(ft_strncmp("-2147483647", ft_itoa(-2147483647), 12) == 0);
	assert(ft_strncmp("214647", ft_itoa(214647), 12) == 0);
	assert(ft_strncmp("-214647", ft_itoa(-214647), 12) == 0);

	// tests ft_strmapi
	assert(ft_strncmp("HELLO, WORLD!", ft_strmapi("Hello, World!", ft_toupper_worker), 14) == 0);
	assert(ft_strncmp(" HELLO, 123WORLD!", ft_strmapi(" Hello, 123World!", ft_toupper_worker), 20) == 0);
	assert(ft_strncmp("", ft_strmapi("", ft_toupper_worker), 20) == 0);

	// tests ft_striteri
	str = ft_strdup("Hello, World!");
	ft_striteri(str, ft_toupper_iteri_worker);
	assert(ft_strncmp(str, "HELLO, WORLD!", 14) == 0);
	str = ft_strdup("Hello, World!");
	ft_striteri(str, ft_toupper_iteri_worker);
	assert(ft_strncmp(str, "HELLO, WORLD!", 14) == 0);

	// tests ft_putchar_fd
	write(1, "test ft_putchar_fd: ", 20);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);

	// tests ft_putstr_fd
	write(1, "test ft_putstr_fd: ", 19);
	ft_putstr_fd("Hello, World!", 1);
	ft_putchar_fd('\n', 1);

	// tests ft_putendl_fd
	write(1, "test ft_putendl_fd: ", 20);
	ft_putendl_fd("Hello, World!", 1);

	// tests ft_putnbr_fd
	write(1, "test ft_putnbr_fd: ", 19);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-42, 1);

	// tests ft_lstnew
	int	cont = 11;
	t_list	*head = NULL;
	ft_lstadd_front(&head, ft_lstnew(&cont));
	assert(*(int *)(head->content) == 11);
	assert(head->next == NULL);

	// tests ft_lstadd_front
	cont = 10;
	head->next = ft_lstnew(&cont);
	assert(*(int *)(head->next->content) == 10);

	cont =  12;
	t_list	*new = ft_lstnew(&cont);
	assert(*(int *)(new->content) == 12);

	ft_lstadd_front(&head, new);
	
	assert(head == new);

	// tests ft_lstsize
	assert(ft_lstsize(head) == 3);
	assert(ft_lstsize(NULL) == 0);
	assert(ft_lstsize(new) == 3);

	// tests ft_lstlast
	
	// tests ft_lstadd_back
	cont = 14;
	t_list	*back = NULL;
	ft_lstadd_back(&back, ft_lstnew(&cont));
	assert(*(int *)back->content == 14);
	
	cont -= 1;
	back->next = ft_lstnew(&cont);
	assert(*(int *)back->next->content == 13);

	ft_lstadd_back(&back, head);

	// tests ft_lstdelone
	// current = back;
	// while(current)
	// {
	// 	ft_putnbr_fd(*(int *)current->content, 1);
	// 	current = current-> next;
	// }

	// tests ft_lstiter
	
	
	// tests ft_lstmap
	
	// tests ft_lstclear
	exit(0);
	return (0);
}