/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:41:52 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/24 17:18:08 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	size_src;
	size_t	size_dst;
	size_t	i;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (!n)
		return (size_src);
	if (size_dst >= n)
		return (n + size_src);
	i = 0;
	while (i < (n - size_dst - 1) && src[i])
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_src + size_dst);
}

// it only acepts true "c" strings, i.e., nul terminated ones
// it copies up to size - 1 chars from src, 
// and null terminates the result
// returns the size of the source