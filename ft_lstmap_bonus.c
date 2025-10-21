/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:46:22 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:08:25 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
// #include <stdio.h>

// void	del(void *content)
// {
// 	free(content);
// }

// void *add_exclamation(void *content)
// {
// 	char *str = (char *)content;
// 	char *new_str = malloc(ft_strlen(str) + 2);
// 	if (!new_str)
// 		return NULL;
// 	ft_strlcpy(new_str, str, sizeof(new_str));
// 	ft_strlcat(new_str, "!", sizeof(new_str));
// 	return new_str;
// }

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew(ft_strdup("Hello"));
// 	t_list *node2 = ft_lstnew(ft_strdup("World"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);

// 	t_list *new_head = ft_lstmap(head, add_exclamation, del);

// 	t_list *tmp = new_head;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	ft_lstclear(&head, del);
// 	ft_lstclear(&new_head, del);

// 	return 0;
// }