/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:36:02 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/17 16:40:53 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// int main()
// {
//     int c = 50;
//     printf("value : %d, char representation is %c\n", ft_isalpha(c), c);
//     printf("%d return value of isalpha\n", isalpha(c));
// }

/*isalpha checks wether a character is an alphabet or not.
if it is, it returns a non-zero integer.
if it isn't it returns 0.

it takes a single argument in the form 
of an integer and returns an integer value.
Even though it takes an integer as an argument, 
character can be passed
Internally, the char is converted into the integer
value corresponding to its ASCII value when passed.

isalpha is defined in <ctype.h> file */