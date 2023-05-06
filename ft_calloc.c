/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 16:30:57 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/30 19:56:40 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*ptr;

	ptr = malloc(nmemb * n);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', nmemb * n);
	return (ptr);
}

// if (nmemb == 0 || n == 0)
// 	return (NULL);
// int	main(void)
// {
// 	int	*ptr;
// 	int	*str;
//
// 	ptr = ft_calloc(3, sizeof(int));
// 	str = calloc(3, sizeof(int));
// 	int	m = 3 / sizeof(int);

// 	for (int i = 0; i < m; i++)
// 		printf("%d\n", ptr[i]);
// 	printf("calloc real results :\n");
// 	for (int i = 0; i < m; i++)
// 		printf("%d\n", str[i]);
// 	if(ptr[2] == str[2])
// 		printf("equal\n");
// 	return 0;
// }
/*allocates memory for an array of nmemb elements of n bytes each 
and returns a pointer to the allocated memory
unlike malloc, it initializes memory to zero.
if n is 0, then calloc returns either NULL or a unique pointer
that can later be successfuly passed to free().
*/