/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:33:10 by kriad             #+#    #+#             */
/*   Updated: 2025/11/10 15:39:53 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exist(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && exist(set, s1[start]))
		start++;
	while (end > start && exist(set, s1[start]))
		end--;
	dest = malloc(end - start + 1);
	if (!dest)
		return (NULL);
	while (start < end)
	{
		dest[i++] = s1[start++];
	}
	dest[i] = '\0';
	return (dest);
}
