/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:55:39 by mbaiz             #+#    #+#             */
/*   Updated: 2023/12/03 14:10:24 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n1;

	n1 = n;
	if (fd < 0)
		return ;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 *= -1;
	}
	if (n1 >= 10)
		ft_putnbr_fd(n1 / 10, fd);
	ft_putchar_fd(n1 % 10 + '0', fd);
}
