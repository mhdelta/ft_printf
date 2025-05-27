/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:15:19 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/13 10:39:10 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*ns;
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	ns = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (ns == NULL)
		return (NULL);
	r = ns;
	while (*s1 != '\0')
	{
		*ns = *s1;
		ns++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*ns = *s2;
		ns++;
		s2++;
	}
	*ns = '\0';
	return (r);
}
