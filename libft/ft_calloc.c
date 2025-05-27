/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:15:45 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/10 16:08:03 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	s;
	void	*ptr;

	if (size != 0 && nmeb > SIZE_MAX / size)
		return (NULL);
	s = nmeb * size;
	ptr = malloc(s);
	if ((ptr) == NULL)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
