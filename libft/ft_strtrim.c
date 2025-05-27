/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:44:48 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/13 11:36:07 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*ns;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
	{
		end--;
	}
	ns = (char *)malloc((sizeof(char) * (end - start + 1)));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1 + start, end - start + 1);
	return (ns);
}
