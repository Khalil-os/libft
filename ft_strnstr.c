/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:55:48 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 18:56:28 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t n)
{
	size_t	i;
	size_t	j;

	if (*dest == '\0')
		return ((char *)src);
	i = 0;
	while (i < n && src[i])
	{
		j = 0;
		while (i + j < n && src[i + j] == dest[j] && dest[j])
			j++;
		if (dest[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char *hay = "Hello 42 world";
//     char *need = "42";
//     char *res;

//     res = ft_strnstr(hay, need, 10);
//     printf("Result: %s\n", res);

//     return 0;
// }