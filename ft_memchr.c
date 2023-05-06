/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:11:48 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/01 19:36:55 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "bonjour";
// 	// char *ptr = memchr(str, '\0', 12);
// 	// char *tester = ft_memchr(str, '\0', 12);
// 	if (memchr(str, 'b', 4) == ft_memchr(str, 'b', 4))
// 		printf("correct\n");
// 	else
// 		printf("try again\n");
// 	return 0;
// }
// it scans the initial n bytes of the memory area
// pointed by s for the first instance of c
// it returns a pointer to the matching byte 
// or NULL if the char doesn't occur in the given memory area. 