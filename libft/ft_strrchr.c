/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:07:27 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/02 14:18:28 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)&s[ft_strlen(s)];
	if ((char)c == '\0')
		return (ptr);
	while (ptr >= (char *)s)
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		ptr--;
	}
	return (0);
}
