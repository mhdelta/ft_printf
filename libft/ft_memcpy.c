/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:01:32 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/08 16:11:39 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dst_ini;
	size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	dst_ini = dest;
	while (n > 0)
	{
		n--;
		((char *)dest)[i] = ((const char *) src)[i];
		i++;
	}
	return (dst_ini);
}
