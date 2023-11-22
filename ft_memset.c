/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:18:20 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/20 13:26:33 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// int main ()
// {
// 	int a = 0;
// 	 ft_memset(&a, 255, 4);
// 	 ft_memset(&a, 250, 2);
// 	 ft_memset(&a, 199, 1);
// 	 printf("%d",a);
// 	//  while (i<5)
// 	//  {
// 	// 	 printf("%c ",t[i]);
// 	// 	 i++;
// 	//  }	 
// }
