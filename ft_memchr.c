/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:38:01 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:39:05 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Hello, 42!";
//     char *res;

//     res = ft_memchr(str, '4', 12);
//     if (res)
//         printf("Found '%c' at index %ld\n", *res, res - str);
//     else
//         printf("Character not found\n");
// }