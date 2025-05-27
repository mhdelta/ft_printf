/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:50:43 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/06 14:55:49 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void			*ptr;
	unsigned char	*byte;

	ptr = (void *)s;
	while (n > 0)
	{
		n--;
		byte = (unsigned char *)ptr;
		if (*byte == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	return (0);
}
