/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:36:56 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 16:13:42 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_src);
}

// int main(void)
// {
// 	char	src[] = "heyo";
// 	char	src2[] = "haha";
// 	char	dest[] = "bitch";
// 	char	dest2[] = "helo";

// 	printf("ft_strlcpy = %ld, %s", ft_strlcpy(dest, src, 4), dest);
// 	printf("strlcpy = %ld, %s", strlcpy(dest, src2, 4), dest);
// }

// it only acepts true "c" strings, i.e., nul terminated ones
// it copies up to size - 1 chars from src, 
// and null terminates the result
// returns the size of the source