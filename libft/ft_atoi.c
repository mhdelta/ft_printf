/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:57:00 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/09 16:05:01 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				r;
	signed char		sign;
	const char		*c;

	sign = 1;
	r = 0;
	c = nptr;
	while (*c == ' ' || (*c >= '\t' && *c <= '\r'))
		c++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			sign = -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		r = (r * 10) + (*c - '0');
		c++;
	}
	return (r * sign);
}
