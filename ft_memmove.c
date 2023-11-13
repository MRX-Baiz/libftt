/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:37:31 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/05 11:23:39 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	src1 = (char *)src;
	dst1 = (char *)dst;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}
/*int main()
{
	int str[5]={5,5,5,5,5};
	char destination[20];

	ignedrintf("%d",str[0]);
	ft_memmove(destination ,str, 12);
	printf("%d",destination[4]);
}*/
