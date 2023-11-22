/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:18:14 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/19 17:18:21 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*e1;

	e1 = malloc(sizeof(t_list));
	if (!e1)
		return (NULL);
	e1->content = content;
	e1->next = NULL;
	return (e1);
}

// int	main()
// {
// 	char *k;
// 	k = "5";
// 	 t_list *e2;
// 	e2 = ft_lstnew(k);
// 	printf("%s",(char *)(e2->content));
// }
