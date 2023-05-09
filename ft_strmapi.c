/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duckiemadu <duckiemadu@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:19:07 by duckiemadu        #+#    #+#             */
/*   Updated: 2023/05/09 20:19:08 by duckiemadu       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	n;
	size_t	i;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = (*f)(i, s[i]);
	str[n] = '\0';
	return (str);
}

/*char	ft_add(unsigned int n, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char	s[] = "hello world";
	char (*f)(unsigned int, char);
	printf("%s\n", ft_strmapi(s, ft_add));
	printf("%s\n", s);
}*/
