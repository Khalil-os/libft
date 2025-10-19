/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:33:57 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 15:08:51 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	t = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello, 42!";
//     char dest[20]; 

//     ft_memcpy(dest, NULL, 10);
//     dest[10] = '\0'; 

//     printf("Source: %s\n", src);
//     printf("Dest:   %s\n", dest);

//     return 0;
// }