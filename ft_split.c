/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:41:32 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/14 15:41:43 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	longword(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word++;
			i++;
		}
		if (s[i - 1] != c)
			return (word);
	}
	return (0);
}

static char	**ft_free(char **rslt)
{
	int	i;

	i = 0;
	if (rslt)
	{
		while (rslt[i])
		{
			free(rslt[i]);
			i++;
		}
		free(rslt);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**rslt;
	int		j;

	j = 0;
	if (s == 0)
		return (0);
	rslt = malloc((count(s, c) + 1) * sizeof(char *));
	if (rslt == 0)
		return (ft_free(rslt), NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			rslt[j] = ft_substr(s, 0, longword(s, c));
			if (!rslt[j])
				return (ft_free(rslt));
			s += longword(s, c);
			j++;
		}
	}
	rslt[j] = NULL;
	return (rslt);
}
// int main()
// {
// 	char **str;
// 	str = ft_split("-------split--------this-for----me--!--------", '-');
// 	int i =0;
// 	while (*str[i]){
// 	printf("%s",*str[i]);
// 	i++;
// 	}
// }
