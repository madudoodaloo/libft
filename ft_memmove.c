/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:26:59 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/24 16:09:28 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;

	if (!dest && !src)
		return (NULL);
	cpy_src = (unsigned char *)src;
	cpy_dest = (unsigned char *)dest;
	if (cpy_dest < cpy_src)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
	{
		cpy_dest[n] = cpy_src[n];
	}
	return (dest);
}

// The memmove() function copies n bytes from memory area 
// src to memory area dest. The memory areas may overlap: 
// copying takes place as though the bytes in src  are  first
// copied  into  a temporary array that does not overlap 
// src or dest, and the bytes are
// then copied from the temporary array to dest.