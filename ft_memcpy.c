/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:15:36 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 17:37:17 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;

	if (!dest && !src)
		return (NULL);
	cpy_dest = (unsigned char *)dest;
	cpy_src = (unsigned char *)src;
	i = 0;
	while (n-- > 0)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}

// The  memcpy() function copies n bytes from memory 
// area src to memory area dest.  
// The memory areas must not overlap.  
// // Use memmove(3) if the memory areas do overlap. 
// By declaring the destination pointer as an array of unsigned characters, 
// you ensure that the compiler treats it as a raw block of memory, 
// and that every byte is copied exactly as it is from the source.
// this way you prevent convertions that the compiler 
// might do that alter your data.