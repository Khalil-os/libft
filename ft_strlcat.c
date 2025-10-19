/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:10:27 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 18:40:28 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	while (dest[dlen] && dlen < size)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>

// int main(void)
// {
//     char dest[15] = "Hello";
//     char *src = "42!";
//     unsigned int n;

//     n = ft_strlcat(dest, src, sizeof(dest));

//     printf("Result: %s\n", dest);
//     printf("Return: %u\n", n);

//     return 0;
// }