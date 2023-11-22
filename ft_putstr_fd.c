/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:22:13 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/22 09:50:12 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
// #include <fcntl.h>
// int main()
// {
// int fd = open("test.txt", O_CREAT |O_WRONLY|O_RDONLY,0777);
// printf("%d\n", fd);
// printf("%d\n", fd2);
// printf("%d\n", fd3);
// if (!fd)
// {
// 	printf("makhdemsh");
// }
// else
// {
// 	write(fd,"1234567890",10);
// printf(" %d",fd);
// printf("%d",fd);
// close(fd);
// }
// }