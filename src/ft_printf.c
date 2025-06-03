/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:49:07 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/27 20:24:50 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printers(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(args, int));
	if (c == 's')
		count += ft_printstr(va_arg(args, char *));
	if (c == 'p')
		count += ft_print_ptr(va_arg(args, unsigned long long));
	if (c == 'd' || c == 'i')
		 count += ft_printnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), c);
	if (c == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int	count;
	int	i;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] == '%')
			count += ft_printers(args, str[++i]);
		else 
			count += ft_printchar(str[i]); 
		i++;
	}
	va_end(args);
	return(count);
}