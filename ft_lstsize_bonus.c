/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:49:18 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:08:41 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// #include <stdio.h>

// int main()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew(ft_strdup("Node 1"));
// 	node2 = ft_lstnew(ft_strdup("Node 2"));
// 	node3 = ft_lstnew(ft_strdup("Node 3"));

// 	head = node1;
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);

// 	printf("List size: %d\n", ft_lstsize(head));

// 	ft_lstclear(&head, free);
// 	return 0;
// }