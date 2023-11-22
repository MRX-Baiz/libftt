/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:56:37 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/22 14:28:18 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>
// int main()
// {
// int fd = open("skot.c", O_CREAT |O_WRONLY);
// int fd2 = open("skot.c", O_RDONLY|O_WRONLY);
// int fd3 = open("skot.c", O_RDONLY|O_WRONLY);
// printf("%d\n", fd);
// printf("%d\n", fd2);
// printf("%d\n", fd3);
// }