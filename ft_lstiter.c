/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:27:26 by kriad             #+#    #+#             */
/*   Updated: 2025/10/19 17:55:05 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// #include <stdio.h>

// void print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1;
// 	t_list *node2;

// 	node1 = ft_lstnew("Hello");
// 	node2 = ft_lstnew("World");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);

// 	ft_lstiter(head, print_content);

// 	return 0;
// }