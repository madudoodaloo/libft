/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:08:08 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/17 18:12:02 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main()
// {
//     int c = 48;
//     int d = -1;
//     char    e = 'a';
//     int f = 128;
//     printf("%d c\n", ft_isascii(c));
//     printf("%d d\n", ft_isascii(d));
//     printf("%d e\n", ft_isascii(e));
//     printf("%d f\n", ft_isascii(f));
//     printf("%d c\n", isascii(c));
//     printf("%d d\n", isascii(d));
//     printf("%d e\n", isascii(e));
//     printf("%d f\n", isascii(f));
// }
/*it checks wether c is a 7bit unsigned char value
that fits into the ASCII character set (i.e. from 0 to 127)
returns 1, if it matches an ascii char.
returns 0, if it doesn't.*/