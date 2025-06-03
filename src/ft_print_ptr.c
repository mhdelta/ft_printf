/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:53 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/27 19:30:30 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int ft_ptr_len(uintptr_t n)
{
	int i;
	i = 0;

	if (n == 0)
		return (1);

	while(n != 0)
	{
		i++;
		n /= 16;
	}

	return (i);
}

void ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else 
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			ft_putchar_fd((num - 10 + 'a'), 1);
		}
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;
	count = 0;
	
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return 5;
	}

	count += 2;
	write(1, "0x", 2);
	
	ft_put_ptr(ptr);
	count += ft_ptr_len(ptr);
	return count;
}	