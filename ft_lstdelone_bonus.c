/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:06:11 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:08:04 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
// #include <stdio.h>

// void	del_content(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *node = ft_lstnew(malloc(20));

// 	if (!node)
// 		return (1);

// 	ft_lstdelone(node, del_content);

// 	printf("Node deleted successfully!\n");
// 	return 0;
// }