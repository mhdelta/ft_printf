/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:55:27 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/15 15:07:07 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_chars(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long int	nn;

	nn = n;
	len = ft_count_chars(nn);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nn == 0)
		res[0] = '0';
	if (nn < 0)
	{
		res[0] = '-';
		nn = -nn;
	}
	while (nn > 0)
	{
		res[len] = ((nn % 10) + '0');
		nn /= 10;
		len--;
	}
	return (res);
}
