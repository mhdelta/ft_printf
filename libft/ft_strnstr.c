/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:01:15 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/09 16:02:29 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t		i;
	const char	*tb;
	const char	*tl;

	tb = big;
	tl = little;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (size > 0 && *big != '\0')
	{
		tb = big;
		tl = little;
		i = 0;
		while (size - i > 0 && *tb == *tl)
		{
			tb++;
			tl++;
			i++;
			if (*tl == '\0')
				return ((char *)big);
		}
		big++;
		size--;
	}
	return (0);
}
