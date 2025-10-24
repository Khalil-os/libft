/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:33:10 by kriad             #+#    #+#             */
/*   Updated: 2025/10/24 20:03:02 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exist(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		len;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	len = 0;
	while (s1[len])
		len++;
	i = 0;
	while (s1[i] && exist(set, s1[i]))
		i++;
	j = len - 1;
	while (j >= 0 && exist(set, s1[j]))
		j--;
	len = j - i + 1;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	len = 0;
	while (s1[i] && i <= j)
		s[len++] = s1[i++];
	s[len] = '\0';
	return (s);
}
// #include <stdio.h>

// int main(void)
// {
//     char *s1 = "   Hello 42!   ";
//     char *set = " ";
//     char *res = ft_strtrim(s1, set);

//     if (res)
//     {
//         printf("Original: '%s'\n", s1);
//         printf("Trimmed:  '%s'\n", res);
//         free(res);
//     }

//     return 0;
// }