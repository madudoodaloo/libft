/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:11 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/04 16:07:06 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setchecker(char const *set, char c)
{
	size_t	s;

	s = 0;
	while (set[s])
	{
		if (set[s] == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;
	size_t	i;
	size_t	f;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_setchecker(set, s1[i]) && s1[i])
		i++;
	n = ft_strlen(s1);
	while (ft_setchecker(set, s1[n - 1]) && s1[n - 1])
		n--;
	str = (char *)malloc(sizeof(char) * (n - i + 1));
	if (!str)
		return (NULL);
	f = 0;
	while (s1[i] && i < n)
		str[f++] = s1[i++];
	str[f] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("shusos", ""));
}*/
/*
params:
s1: The string to be trimmed.
set: The reference set of characters to trim.
it returns the trimmed string or NULL if the alloc fails
it allocates and returns a copy of s1 without the chars specified in
set.
*/
