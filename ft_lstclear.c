/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:09:08 by kriad             #+#    #+#             */
/*   Updated: 2025/10/19 17:54:51 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
// #include <stdio.h>

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew(ft_strdup("Node 1"));
// 	node2 = ft_lstnew(ft_strdup("Node 2"));
// 	node3 = ft_lstnew(ft_strdup("Node 3"));

// 	head = node1;
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("Before clear: %s\n", tmp->content);
// 		tmp = tmp->next;
// 	}

// 	ft_lstclear(&head, del);
// 	if (!head)
// 		printf("List cleared successfully!\n");
// 	return 0;
// }