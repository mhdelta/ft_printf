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

void ft_putstr(char *str)
{
	while(str)
		write(1, str, 1);
}

int	ft_printstr(char * s)
{
	return 1;
}
int ft_num_len(unsigned int num)
{
	return 1;
}
int ft_printnbr(int n)
{
	return 1;
}

char  *ft_uitoa(unsigned int n)
{
	return 1;
}

