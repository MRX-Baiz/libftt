/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hossam.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:47:52 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/15 12:42:00 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = nbr_len(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = 48;
	while (n > 0)
	{
		str[i--] = 48 + n % 10;
		n /= 10;
	}
	return (str);
}
/*int	main(void)
{
	int		n;
	char	*str;

	n = 97;
	str = ft_itoa(n);
	printf("%s", str);
}*/
