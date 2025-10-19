/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:02:56 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 17:14:20 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 2) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start <= end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **res, int k)
{
	while (k > 0)
		free(res[--k]);
	free(res);
	return (NULL);
}

static int	split2(char **res, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			res[k] = word_dup(s, i, j - 1);
			if (!res[k])
				return (free_all(res, k), 0);
			k++;
			i = j;
		}
		else
			i++;
	}
	res[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!split2(res, s, c))
		return (NULL);
	return (res);
}
// #include <stdio.h>

// int main(void)
// {
//     char **res;
//     int i;

//     res = ft_split("    Hello   world  this is 42     ", ' ');
//     if (!res)
//         return 1;

//     i = 0;
//     while (res[i])
//     {
//         printf("[%s]\n", res[i]);
//         free(res[i]);
//         i++;
//     }
//     free(res);

//     return 0;
// }