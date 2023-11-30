/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:48:33 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/24 12:37:08 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	lastc;
	int		k;

	lastc = (char)c;
	k = ft_strlen(s);
	while (k >= 0)
	{
		if (s[k] == lastc)
			return ((char *)&s[k]);
		k--;
	}
	return (NULL);
}
