/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:52:59 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:08:18 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *last;

// 	node1 = ft_lstnew(ft_strdup("Node 1"));
// 	node2 = ft_lstnew(ft_strdup("Node 2"));
// 	node3 = ft_lstnew(ft_strdup("Node 3"));

// 	head = node1;
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	last = ft_lstlast(head);
// 	printf("Last node content: %s\n", (char *)last->content);

// 	ft_lstclear(&head, free);
// 	return 0;
// }