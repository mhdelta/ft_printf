/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:36:12 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/27 19:36:48 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_num_len(unsigned int num)
{
	int	i;
	i = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return i;
}

char	*ft_uitoa(unsigned int n)
{
	char		*res;
	int			len;

	len = ft_num_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
		res[0] = '0';

	while (n > 0)
	{
		res[len] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (res);
}

int	ft_print_unsigned(unsigned int n)
{
	int count;
	char	*num_str;

	count = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		count++;
	}	
	else
	{
		num_str = ft_uitoa(n);
		count += ft_printstr(num_str);
		free(num_str);
	}

	return (count);
}
