/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:47:28 by kriad             #+#    #+#             */
/*   Updated: 2025/10/20 20:55:20 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;	
	unsigned char	*t;
	size_t			i;

	if (!s1 && !s2)
		return (0);
	p = (unsigned char *) s1;
	t = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != t[i])
			return (p[i] - t[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hella";

//     //int res = memcmp(NULL, NULL, 5);
//     int res = ft_memcmp(str1, str2, 0);
//     if (res == 0)
//         printf("str1 and str2 are equal\n");
//     else
//         printf("str1 and str2 differ: %d\n", res);
// }