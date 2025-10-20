/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:14:49 by kriad             #+#    #+#             */
/*   Updated: 2025/10/20 21:01:32 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	len = size * nmemb;
	if (size != 0 && nmemb != len / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
// #include <stdio.h>

// int main(void)
// {
//     int *arr = ft_calloc(3, 4);
//     if (!arr)
//         return 1;

//     printf("Values: %d %d %d\n", arr[0], arr[1], arr[2]);

//     free(arr);
//     return 0;
// }