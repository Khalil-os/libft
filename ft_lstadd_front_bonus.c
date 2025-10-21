/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:58:11 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:07:42 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("B");
//     t_list *node2 = ft_lstnew("A");

//     head = node1;
//     ft_lstadd_front(&head, node2);

//     printf("1st node: %s\n", (char *)head->content);
//     printf("2nd node: %s\n", (char *)head->next->content);

//     free(node1);
//     free(node2);
//     return (0);
// }