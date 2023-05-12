/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:16:23 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/12 15:23:01 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intmin(char *str)
{
	int	i;

	str[1] = '2';
	i = -147483648;
	return (i);
}

static size_t	ft_digits(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = ft_digits(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
			n = ft_intmin(str);
		n = -n;
	}
	str[size] = '\0';
	while (n > 0)
	{
		str[--size] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}*/
