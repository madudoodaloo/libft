/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:44:13 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 14:11:32 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char str[]="hello";
// 	printf("length = %ld\n", ft_strlen(str));
// 	return 0;
// }
// int main()
// {
//     const char  *str = "mauritz";
//     printf("string %s has the size %d\n", str, strlen(str));
//     printf("string %s has the size %d\n", str, ft_strlen(str));
// }
// The strlen() function calculates the length of the string 
// pointed to by s, excluding the terminating null byte ('\0')
// Returns the number of bytes in the string pointed to by s.