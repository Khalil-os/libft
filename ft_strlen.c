/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:05:53 by kriad             #+#    #+#             */
/*   Updated: 2025/10/20 23:53:46 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>

// int main()
// {
//     char *str1 = "Hello 42!";

// 	long x = (long)str1;

// 	char *p = (char *)x;

//     printf("Length of '%s' = %zu\n", p, ft_strlen(str1));

//     return 0;
// }