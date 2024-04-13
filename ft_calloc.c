/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:56:45 by mbaiz             #+#    #+#             */
/*   Updated: 2023/12/04 13:21:41 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			n;

	if (count < 0 || size < 0)
		return (0);
	if (count > 4294967295 || size > 4294967295)
		return (0);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	n = 0;
	while (n < count * size)
	{
		tmp[n] = 0;
		n++;
	}
	return (tmp);
}
