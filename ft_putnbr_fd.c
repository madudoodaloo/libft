/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:16:58 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/12 15:23:42 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nr;

	nr = n;
	if (nr < 0)
	{
		ft_putchar_fd('-', fd);
		nr = -nr;
	}
	if (nr > 9)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putnbr_fd(nr % 10, fd);
	}
	else
	{
		ft_putchar_fd(nr += 48, fd);
	}
}

/*int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
}*/
