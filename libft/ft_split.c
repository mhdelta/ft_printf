/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenao-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:55:27 by mhenao-p          #+#    #+#             */
/*   Updated: 2025/05/14 15:03:33 by mhenao-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c);
static void	*ft_free_result(char **result, int word_index);
static int	ft_get_end_index(char const *s, int i, char c);
static int	ft_move_index(char const *s, char c, int i);

char	**ft_split(char const *s, const char c)
{
	char	**result;
	int		word_index;
	int		i;
	int		j;

	word_index = 0;
	i = 0;
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i] && s[i] != '\0')
	{
		i = ft_move_index(s, c, i);
		if (s[i] == '\0')
			break ;
		j = ft_get_end_index(s, i, c);
		result[word_index] = ft_substr(s, i, j);
		if (!result[word_index])
			return (ft_free_result(result, word_index));
		word_index++;
		i += j;
	}
	result[word_index] = NULL;
	return (result);
}

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*ft_free_result(char **result, int word_index)
{
	while (word_index > 0)
	{
		free(result[word_index - 1]);
		word_index--;
	}
	free(result);
	return (NULL);
}

static int	ft_get_end_index(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i + j] && s[i + j] != c)
		j++;
	return (j);
}

static int	ft_move_index(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}
