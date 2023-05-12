/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:48:23 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/12 16:16:29 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/* void	ft_escrevepota(void *content)
{
	char	*value = (char *)content;
	printf("%s -> ", value);
}

int main(void)
{
	t_list	*head = ft_lstnew(ft_strdup("antartida"));
	t_list	*second = ft_lstnew(ft_strdup("bois"));
	head -> next = second;

	printf("original content: ");
	ft_lstiter(head, ft_escrevepota);
	printf("\n\n");
	
	ft_lstclear(&head, free);
	if (head == NULL)
		printf("successfully erased :) \n");
	return 0;
} */