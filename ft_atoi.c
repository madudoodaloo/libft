/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:27:29 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/30 16:33:44 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((ptr[i] == 32) || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if (ptr[i] == 43 || ptr[i] == 45)
	{
		if (ptr[i] == 45)
			sign *= -1;
		i++;
	}
	while (ft_isdigit(ptr[i]))
	{
		nbr = (nbr * 10) + (ptr[i] - 48);
		i++;
	}
	return (nbr * sign);
}

// int main ()
// {
// 	char	*str = "\n\t -273g98d";
// 	if (ft_atoi(str) == atoi(str))
// 		printf("correct!\n");
// 	else
// 		printf("it's spelled 'burra'...\n");
// }
//man strtol