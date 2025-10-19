/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:19:48 by kriad             #+#    #+#             */
/*   Updated: 2025/10/19 15:38:50 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
		p[i++] = (unsigned char) c;
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
// 	int x = 200000 ;//1337 
// 	ft_memset(&x,-1,4);
// 	ft_memset(&x,214,1);
// 	//ft_memset((unsigned char *)&x + 1,,1);
// 	//ft_memset((signed char *)&x + 1,255,1);
// 	printf("%d\n",x);
// }