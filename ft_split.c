/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:24:51 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/13 19:29:18 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	count++;
	}
	return (count);
}

char	*malloc_word(const char *str, char c)
{
	char	*word;
	int	count;

	count = 0;
	while (*str && str[count] != c)
		count++;
	word = (char *)malloc((count + 1) * sizeof(char));
	if (word == 0)
		return (NULL);
	ft_strlcpy(word, str, count + 1);
	return (word);
}

char	**buf_free(char **buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
	return (0);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	char	**array;

	i = 0;
	if (str == 0)
		return (0);
	while (*str && *str == c)
		str++;
	array = malloc(count_words(str, c) * sizeof(char *));
	if (array == 0)
		return (0);
	while (*str)
	{
		array[i] = malloc_word(str, c);
		if (array[i] == NULL)
			return (buf_free(array));
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
		i++;
	}
	array[i] = 0;
	return (array);
}
