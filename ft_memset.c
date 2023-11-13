/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:18:20 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/05 11:01:43 by mbaiz            ###   ########.fr       */
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
		ptr[i] = c;
		i++;
	}
	return (b);
}
/*int main ()
{
	char t[5];
	int i=0;
	int value = 'j';
	 ft_memset(t,value,5);
	 while (i<5)
	 {
		 printf("%c ",t[i]);
		 i++;
	 }
	 
}*/
