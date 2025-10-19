/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:35:23 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 18:15:20 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	slen;

	slen = 0;
	while (s[slen])
		slen++;
	i = slen - 1;
	if (c == '\0')
		return ((char *)&s[slen]);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char *s = "Hello 42 World";
//     char *res;

//     res = ft_strrchr(s, 'o');
//     if (res)
//         printf("Last 'o' at: %s\n", res);

//     res = ft_strrchr(s, 'x');
//     if (!res)
//         printf("'x' not found\n");
// }