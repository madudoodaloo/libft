/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:31:21 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/17 20:13:06 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main()
// {
// 	int c = 48;
// 	int d = 36;
// 	char    e = 'a';
// 	char    f = 27;

// 	printf("%d c\n", ft_isalnum(c));
// 	printf("%d d\n", ft_isalnum(d));
// 	printf("%d e\n", ft_isalnum(e));
// 	printf("%d f\n", ft_isalnum(f));
// 	printf("%c c\n", isalnum(c));
// 	printf("%c d\n", isalnum(d));
// 	printf("%c e\n", isalnum(e));
// 	printf("%c f\n", isalnum(f));
// }
/*
Returns 1 if argument is an alphanumeric character.
Returns 0 if argument is neither an alphabet nor a digit.
The isalnum() function checks whether the argument passed 
is an alphanumeric character (alphabet or number) or not.*/