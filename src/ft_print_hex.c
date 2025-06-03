/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:19:40 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/27 19:35:21 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

int ft_hex_len(unsigned int n)
{
	int i;
	i = 0;

	if (n == 0)
		return (1);

	while(n != 0)
	{
		n /= 16;
		i++;
	}

	return (i);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else 
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}

}

int	ft_print_hex(unsigned int n, const char c)
{
	if (n == 0)
		write(1, "0", 1);
	else
	{
		ft_put_hex(n, c);
	}
	return ft_hex_len(n);
}
