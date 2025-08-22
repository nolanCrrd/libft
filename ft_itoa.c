/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <nolan@student.42>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:26:14 by ncorrear          #+#    #+#             */
/*   Updated: 2025/08/22 09:45:13 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	set_reverse_number(char tmp_buffer[11], int n, int *i)
{
	*i = n == 0;
	if (n == 0)
		tmp_buffer[0] = '0';
	if (n == -2147483648)
	{
		tmp_buffer[*i] = '8';
		n /= 10;
		*i += 1;
	}
	n *= ((n < 0) * -2 + 1);
	while (n > 0)
	{
		tmp_buffer[*i] = n % 10 + '0';
		n /= 10;
		*i += 1;
	}
}

char	*ft_itoa(int n)
{
	char	*buffer;
	char	tmp_buffer[11];
	int		i;
	int		j;
	int		sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	set_reverse_number(tmp_buffer, n, &i);
	buffer = malloc(i + 1 + sign);
	if (buffer == NULL)
		return (NULL);
	j = 0;
	if (sign)
		buffer[j++] = '-';
	while (--i >= 0)
		buffer[j++] = tmp_buffer[i];
	buffer[j] = '\0';
	return (buffer);
}