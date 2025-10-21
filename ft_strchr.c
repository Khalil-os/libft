/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:27:38 by kriad             #+#    #+#             */
/*   Updated: 2025/10/21 22:29:31 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char *s = "Hello world";
//     char *p;

//     p = ft_strchr(s, 'o');
//     if (p)
//         printf("Found: %s\n", p);

//     p = ft_strchr(s, 'z');
//     if (!p)
//         printf("Not found\n");

//     return 0;
// }