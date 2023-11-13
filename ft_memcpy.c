/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:26:33 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/13 17:02:04 by mbaiz            ###   ########.fr       */
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
/*int main()
{
	char src[] = "hossam";
	char dst[4] = {0};

	ft_memcpy(dst, src, 3);

	printf("%s\n",dst);

}*/
