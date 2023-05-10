/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:20:47 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/10 16:35:30 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

// int main()
// {
//     int c = 9;
//     int d = 10;
//     int e = 11;
//     int f = 127;
//     printf("%d c\n", ft_isprint(c));
//     printf("%d d\n", ft_isprint(d));
//     printf("%d e\n", ft_isprint(e));
//     printf("%d f\n", ft_isprint(f));
//     printf("%d c\n", isprint(c));
//     printf("%d d\n", isprint(d));
//     printf("%d e\n", isprint(e));
//     printf("%d f\n", isprint(f));
// }
// The isprint() function in C is used to check if a given
// character is a printable character, which means its 
// decimal value is between 32 and 126 (inclusive). 
// The function returns a non-zero value if the 
// character is a printable character, and zero otherwise.