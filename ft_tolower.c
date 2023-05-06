/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:21:27 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 14:54:39 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int main()
// {
// 	char	c = '\\';

// 	printf("%c ft_tolower\n", ft_tolower(c));
// 	printf("%c tolower\n", tolower(c));
// }
// francinette error if i put the return value with arethmetics, says it isn't 
// the expected format of the return value and doesn't compile with the flags
