/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:36:23 by kriad             #+#    #+#             */
/*   Updated: 2025/10/24 20:02:49 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;
	int				len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	t = malloc(len + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
// #include <stdio.h>

// char my_func(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return c - 32;
//     return c;
// }

// int main(void)
// {
//     char *s = "hello world";
//     char *res = ft_strmapi(s, my_func);

//     if (res)
//     {
//         printf("Original: %s\n", s);
//         printf("Mapped:   %s\n", res);
//         free(res);
//     }

//     return 0;
// }