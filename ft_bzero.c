/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:03:51 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/12 15:22:51 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	int	nbrs[] = {1, 2, 3};
// 	int	l = sizeof(nbrs) / sizeof(int);
// 	int	nbr[] = {1, 2, 3};
// 	int	m = sizeof(nbr) / sizeof(int);

// 	ft_bzero(nbrs, 3 * sizeof(int));
// 	for (int i = 0; i < l; i++)
// 		printf("%d\n", nbrs[i]);
// 	printf("bzero real results :\n");
// 	bzero(nbr, 3 * sizeof(int));
// 	for (int i = 0; i < m; i++)
// 		printf("%d\n", nbr[i]);
// 	if(nbr[2] == nbrs[2])
// 		printf("equal\n");
// 	return 0;
// }
// The  bzero()  function  erases the data in the n 
// bytes of the memory starting at the location pointed to by s, 
// by writing zeros (bytes containing '\0') to that area.