/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kriad <kriad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:12:33 by kriad             #+#    #+#             */
/*   Updated: 2025/10/18 17:40:28 by kriad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	unsigned int	len;
	char			*copy;

	len = 0;
	while (s1[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
// #include <stdio.h>

// int main(void)
// {
//     char *original = "Hello 42!";
//     char *copy;

//     copy = ft_strdup(original);
//     if (!copy)
//         return 1;

//     printf("Original: %s\n", original);
//     printf("Copy: %s\n", copy);

//     free(copy);
//     return 0;
// }