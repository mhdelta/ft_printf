/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:37:15 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/27 19:50:14 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	ft_printstr(char *s)
{
	int	i;
	i = 0;

	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}

	while (s[i])
	{	
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int	len;
	char *num;

	len = 0;

	num = ft_itoa(n);
	len = ft_num_len(n);

	len = ft_printstr(num);
	free(num);
	return (len);
}

