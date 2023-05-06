/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:46 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/04 16:56:40 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *str, char c)
{
	int	i;
	int	word;

	i = -1;
	word = 0;
	while (str[++i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			word++;
	}
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		i;
	int		start;
	int		size;

	split = (char **)malloc(sizeof(char *) * (ft_counter(str, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	start = -1;
	while (str[++start])
	{
		size = 0;
		while (str[start + size] != c && str[start + size] != '\0')
			size++;
		if ((str[start + size] == c && size > 0) || str[start + size] == '\0')
		{
			split[i++] = ft_substr(str, start, size);
			if (str[start + size] == '\0')
				break ;
			start += size;
		}
	}
	split[i] = NULL;
	return (split);
}

/* int	main(void)
{
	char	**split = ft_split("Ola o meu nome e Filipe", 32);
	int	i = -1;

	while (split[++i])
		printf("%s\n", split[i]);
	// printf("%ld\n", sizeof(char *));
	return (0);
} */
/*man strtok but this one returns an array with two dimensions
params:
s: The string to be split.
c: The delimiter character.
returns the array of new strings resulting from the split


parsing is a process where a program takes a piece of text
and breaks it into smaller parts that can be understood by the
computer.
when you parse a string, you are dividing it into smaller pieces
accordingly to the delimiter/keyword that you defined.
the smaller parts are called tokens*/
