/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:31:34 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/16 14:18:04 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	j = 0;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (ft_strlen(dst)  >= dstsize)
		return (srclen + dstsize);
	if (ft_strlen(dst) <= dstsize)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (dstlen + srclen);
}
// int main()
// {
// char src[7]="hossam";

// char dst[]= "baiz";
// char s[]="pqrstuvwxyz";

// 	size_t k = strlcat("hosam", "baiz", 10);

// 	 printf("%s\n",s);
// 	printf("%lu",k);

// }
