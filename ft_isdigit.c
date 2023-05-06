/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:10:22 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/17 18:18:28 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int main()
{
    char    c = 13;
    char    h = 48;
    int i = 3;
    int k = 53;

    printf("%d c\n", isdigit(c));
    printf("%d h\n", isdigit(h));
    printf("%d i\n", isdigit(i));
    printf("%d k\n", isdigit(k));
    printf("%d c\n", ft_isdigit(c));
    printf("%d h\n", ft_isdigit(h));
    printf("%d i\n", ft_isdigit(i));
    printf("%d k\n", ft_isdigit(k));
}*/
/*The isdigit() function checks whether a character is 
numeric character (0-9) or not.
if the argument is a numeric value, it returns a non-zero integer.
if it isn't, it returns 0.*/
