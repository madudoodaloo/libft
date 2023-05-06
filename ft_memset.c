/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:01:06 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 17:36:52 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
	{
		*str = c;
		str++;
	}
	return (s);
}

// int	main(void)
// {
// 	int	nbrs[] = {1, 2, 3};
// 	int	l = sizeof(nbrs) / sizeof(int);
// 	int	nbr[] = {1, 2, 3};
// 	int	m = sizeof(nbr) / sizeof(int);

// 	ft_memset(nbrs, 50, 3 * sizeof(int));
// 	for (int i = 0; i < l; i++)
// 		printf("%c\n", nbrs[i]);
// 	printf("memset real results :\n");
// 	memset(nbr, 50, 3 * sizeof(int));
// 	for (int i = 0; i < m; i++)
// 		printf("%c\n", nbr[i]);
// 	if(nbr[2] == nbrs[2])
// 		printf("equal\n");
// 	return 0;
// }
// The memset() function in C is used to 
// set a block of memory to a specific value. 
// void *s: A void pointer to the memory block to be set.
// int c: The value to be set. This is typically an integer, but 
// it is converted to an unsigned char before being stored in memory.
// size_t n: The number of bytes to be set.