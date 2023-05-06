/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:22:17 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 20:10:25 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n > 1 && *s01 && *s02 && (*s01 == *s02))
	{
		s01++;
		s02++;
		n--;
	}
	return (*s01 - *s02);
}

// int	main()
// {
// 	printf("ft_strncmp = %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("strncmp = %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
// }
// compares only the first n bytes of s1 and s2.
// it returns the difference between the first difference btw 1 and 2.