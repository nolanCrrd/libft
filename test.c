/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:18:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/10/13 17:55:11 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <libc.h>
#include <assert.h>
#include <stdlib.h>

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
	
	
	return (0);
}