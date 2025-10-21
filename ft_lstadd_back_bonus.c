/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:54:40 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:07:45 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
// #include <stdio.h>

// int main()
// {
// 	t_list *head = NULL;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew(ft_strdup("Node 1"));
// 	node2 = ft_lstnew(ft_strdup("Node 2"));
// 	node3 = ft_lstnew(ft_strdup("Node 3"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	t_list *tmp = head;
// 	int i = 1;
// 	while (tmp)
// 	{
// 		printf("Node %d content: %s\n", i, (char *)tmp->content);
// 		tmp = tmp->next;
// 		i++;
// 	}

// 	ft_lstclear(&head, free);
// 	return 0;
// }