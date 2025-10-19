/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:06:25 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 17:42:47 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// void my_func(unsigned int i, char *c)
// {
//     *c = *c + i;
// }

// int main(void)
// {
//     char str[] = "abcd";

//     printf("Before: %s\n", str);

//     ft_striteri(str, my_func);

//     printf("After: %s\n", str);

//     return 0;
// }