/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:26:33 by mbaiz             #+#    #+#             */
/*   Updated: 2023/12/05 13:52:04 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	src1 = (char *)src;
	dst1 = (char *)dst;
	i = 0;
	if (src1 == dst1)
		return (src1);
	if (src1 == 0 && dst1 == 0)
		return (NULL);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
