/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:51:45 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/22 14:55:49 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
// void del(void *s)
// {
// 	free(s);
// }

// int main()
// {
// 	t_list *n1;
// 	t_list *n2;
// 	t_list *n3;
// 	char *s1 = malloc(10);
// 	char *s2 = malloc(10);
// 	char *s3 = malloc(10);
// 	strcpy(s1,"node 1");
// 	strcpy(s2,"node 2");
// 	strcpy(s3,"node 3");

// 	n1 = ft_lstnew(s1);
// 	n2 = ft_lstnew(s2);
// 	n3 = ft_lstnew(s3);
// 	n1->next = n2;
// 	n2->next = n3;
// 	ft_lstclear(&n1,del);
// printf("%s",n1->content);
// }