/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:58:00 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 18:06:07 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
	{
		i = 0;
		while (src[i])
			i++;
		return (i);
	}
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>

// int main(void)
// {
// 	char dest[5];
// 	unsigned int len;

// 	len = ft_strlcpy(dest, "Hello42", sizeof(dest));

// 	printf("Dest: %s\n", dest);
// 	printf("Length: %u\n", len);

// 	return 0;
// }