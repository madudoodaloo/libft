/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:47:44 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/01 22:54:36 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	size1;
	size_t	size2;
	char	*str;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{	
		str[i] = s1[i];
		i++;
	}
	while (s2[i - size1])
	{
		str[i] = s2[i - size1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("sup", "luyas"));
// }
/*
parameters:
s1: The prefix string.
s2: The suffix string.
returns the new string, NULL if the allocation fails
the string is the result of the concatenation of s1 and s2
*/