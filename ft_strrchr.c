/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:18:41 by msilva-c          #+#    #+#             */
/*   Updated: 2023/04/29 17:46:44 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	counter;
	int	store;

	store = 0;
	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			counter++;
			store = i;
		}
		i++;
	}
	if (counter < 2)
		return (ft_strchr(s, c));
	else
		return ((char *)&s[store]);
}

// int	main()
// {
// 	char	str[] = "pilinha";
// 	char	str2[] = "pilinha";
// 	char	*meu = ft_strrchr(str, 'i');
// 	char	*original = strrchr(str2, 'i');
//
// 	printf("ft_strchr: %s\n", meu);
// 	printf("strchr: %s\n", original);
// 	if (meu[0] == original[0])
// 		printf("chupa, ta certo\n");
// }

// returns a pointer to the last occurence of the int c;
// The strchr() and strrchr() functions return a pointer to the matched 
// character or NULL if the character is not found. The terminating  null
// byte  is  considered part of the string, so that if c is specified as '\0', 
// these functions return a pointer to the terminator.
