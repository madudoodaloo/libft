/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:04:10 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/11 19:42:30 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (*lst == NULL)
		*lst = new;
	else
	{
		end = ft_lstlast(*lst);
		end -> next = new;
	}
}

/* int main(void)
{
	t_list	*head = ft_lstnew("first node");
	t_list	*second = ft_lstnew("second node");
	head -> next = second;
	
	t_list	*new = ft_lstnew("last node");
	ft_lstadd_back(&head, new);

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