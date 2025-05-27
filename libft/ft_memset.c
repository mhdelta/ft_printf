/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:21:46 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/06 14:53:08 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void			*ini;
	unsigned char	*byte;

	ini = s;
	while (n > 0)
	{
		n--;
		byte = (unsigned char *)s;
		*byte = (unsigned char)c;
		s++;
	}
	return (ini);
}
