/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:35:46 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/30 15:34:52 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n > 1 && *s01 == *s02)
	{
		s01++;
		s02++;
		n--;
	}
	return (*s01 - *s02);
}

// int	main(void)
// {
// 	int	nbr[] = {1, 2, 5};
// 	int	rbn[] = {1, 2, 3};

// 	if (ft_memcmp(nbr, rbn, 3 * sizeof(int)) 
//== memcmp(nbr, rbn, 3 * sizeof(int)))
// 		printf("correct\n");
// 	else
// 		printf("nope\n");
// }
/*compares the first n bytes each interpreted as unsigned char
of the memory areas s1 and s2. 
returns am integer >, < or = to 0 */