/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:38:04 by kriad             #+#    #+#             */
/*   Updated: 2025/10/19 15:38:33 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			i;

	p = (unsigned char *)dest;
	t = (unsigned char *)src;
	if ((p < t + n) && (p > t))
	{
		i = n;
		while (i > 0)
		{
			p[i - 1] = t[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p[i] = t[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[20] = "Hello, 42!"; 
//     char str2[20] = "1234567890";

//     ft_memmove(str1 + 2, str1, 5);
//     printf("With overlap: %s\n", str1);
//     return 0;
// }