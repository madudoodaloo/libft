/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:00:00 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/12 16:16:01 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen((char *)s);
	copy = (char *)malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int	main()
// {
// 	printf("%s\n", ft_strdup("god save the queen"));
// 	if (strdup("alo23fjw")==ft_strdup("alo23fjw"))
// 		printf("oh yeah baby\n");
// 	else 
// 		printf("too bad buddy\n");
// 	return 0;
// }
/**
 * it duplicates a string and returns the space in memory
 * where it was allocated and its copy
*/