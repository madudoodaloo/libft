/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:05 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/10 16:54:22 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/* int	main(void)
{
	int	*data = malloc(sizeof(int));
	*data = 42;
	t_list	*node = ft_lstnew(data);

	if (node == NULL)
	{
		printf("error: node is NULL\n");
		return 1;
	}
	int *access = (int *)node->content;
	printf("content of the node: %d\n", *access);
	free(data);
	free(node);

	return 0;
} */