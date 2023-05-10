/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:20:51 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/10 17:12:14 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list	*head = ft_lstnew("first node");
	t_list	*second = ft_lstnew("second node");
	head -> next = second;
	
	t_list	*new = ft_lstnew("new node");
	ft_lstadd_front(&head, new);

	t_list	*current = head;
	while (current != NULL)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
	printf("end of node\n");
	free(second);
    free(new);
    free(head);

	return 0;
} */