/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:36:36 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/10 17:53:53 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	end = lst;
	if (!lst)
		return (NULL);
	while (end->next != NULL)
		end = end -> next;
	return (end);
}

/* int main(void)
{
	t_list	*one = ft_lstnew("a");
	t_list	*two = ft_lstnew("b");
	t_list	*three = ft_lstnew("c");
	t_list	*four = ft_lstnew("yup");

	one -> next = two;
	two -> next = three;
	three -> next = four;
	t_list	*last = ft_lstlast(one);
	char	*access = (char *)last->content;
	printf("final node? %s\n", access);
	return 0;
} */