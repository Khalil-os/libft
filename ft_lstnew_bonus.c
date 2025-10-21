/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:13:21 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 21:26:11 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc (sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list *node;

// 	char *str = "Hello, 42!";
// 	node = ft_lstnew(str);

// 	if (node == NULL)
// 		return (1);

// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);

// 	ft_lstclear(&node,free);
// 	return (0);
// }