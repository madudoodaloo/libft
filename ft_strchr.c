/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:18:08 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 18:21:49 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "pilinha";
// 	char	str2[] = "pilinha";
// 	char	*meu = ft_strchr(str, 'i');
// 	char	*original = strchr(str2, 'i');
//
// 	printf("ft_strchr: %s\n", meu);
// 	printf("strchr: %s\n", original);
// 	if (meu[0] == original[0])
// 		printf("chupa, ta certo\n");
// }
// returns a pointer to the fist occurence to of the char c 
// in the string str
// there's no need in casting the c, it's only 
// benefitial to avoid compilation errors