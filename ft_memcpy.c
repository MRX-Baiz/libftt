/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:26:33 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/14 18:32:55 by mbaiz            ###   ########.fr       */
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
	if (src1 == 0 && dst1 == 0)
		return (NULL);
	if (dst1 == src1)
		return (src1);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
//  #include <stdio.h>
// int main()
// {
//     char d[] = "dhfh";
//     char s[] = "rtyer";
//     char *res1 = ft_memcpy("", s, 0);
//     // char *res = memcpy("", s, 0);
//     // printf("%s\n", res);
//     printf ("%s", res1);
// }use the scd main
// int main()
// {
// //	char src[] = "hossam";
// //	char dst[4] = {0};

// 	printf("%s\n",ft_memcpy("nouha", "nouha", 4));

// //	printf("%s\n",dst);

// }
