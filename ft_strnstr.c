/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:56:02 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/30 16:30:23 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*bigger;
	unsigned char	*smaller;
	size_t			i;
	size_t			t;

	bigger = (unsigned char *)big;
	smaller = (unsigned char *)little;
	i = 0;
	if (*smaller == '\0')
		return ((char *)big);
	while (bigger[i] && i < len)
	{
		t = 0;
		while (bigger[i + t] == smaller[t] && (i + t) < len)
		{
			t++;
			if (smaller[t] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char needle[] = "hahah";
	char haystack[] = "muahahah";

	if (ft_strnstr(haystack, needle, 8) == strnstr(haystack, needle, 9))
		printf("correct!\n");
	else
		printf("nope...\n");
}*/
/*it's the needle in a haystack but it can only compare up to 
len. you return big, if little is an empty string.
if little occurs nowhere in big, NULL is returned
otherwise a pointer to the first char of the first occurence 
of little is returned*/