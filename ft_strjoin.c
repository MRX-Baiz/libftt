/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:29:41 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/08 12:29:42 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*tmp;
	size_t	i;
	size_t	j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	j = 0;
	tmp = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (s1[i])
	{
		tmp[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		tmp[j] = s2[i];
		i++;
		j++;
	}
	tmp[j] = 0;
	return (tmp);
}
