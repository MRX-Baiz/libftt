/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:33:52 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/07 14:33:53 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	n;
	size_t	k;

	n = 0;
	k = ft_strlen(s1);
	tmp = (char *)malloc(k + 1);
	if(!tmp)
		return (NULL);
	while (n < k)
	{
		tmp[n] = s1[n];
		n++;
	}
	tmp[n] = 0;
	return (tmp);
}
