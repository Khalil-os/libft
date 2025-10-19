/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:10:30 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 17:39:05 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
// #include <stdio.h>

// int main()
// {
// 	char str[10] = "Hello123";
//     size_t i;
// 	ft_bzero(str, 10);

//     for (i = 0; i < 10; i++)
//         printf("%d ", str[i]);
//     printf("\n");

//     return 0;
// }