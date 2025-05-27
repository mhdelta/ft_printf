/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:23:04 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/10 16:54:29 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		size;

	size = ft_strlen(s);
	ns = (char *)malloc(size + 1);
	if (ns == NULL)
		return (NULL);
	ft_memcpy(ns, (void *)s, size + 1);
	return (ns);
}
