/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:26:51 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/08 18:51:47 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dl >= size)
		dl = size;
	if (dl == size)
		return (size + sl);
	if (sl < size - dl)
		ft_memcpy(dst + dl, src, sl + 1);
	else
	{
		ft_memcpy(dst + dl, src, size - dl - 1);
		dst[size - 1] = '\0';
	}
	return (dl + sl);
}
