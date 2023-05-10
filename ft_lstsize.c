/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:12:35 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/10 17:36:20 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		size;

	size = 0;
	current = lst;
	while (current != NULL)
	{
		current = current -> next;
		size++;
	}
	return (size);
}

/* int main(void)
{
	t_list	*one = ft_lstnew("a");
	t_list	*two = ft_lstnew("b");
	t_list	*three = ft_lstnew("c");
	t_list	*four = ft_lstnew("d");

	one -> next = two;
	two -> next = three;
	three -> next = four;
	printf("size of linked list lst is %d\n", ft_lstsize(one));

	return 0;
} */