/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilva-c <msilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:49:46 by msilva-c          #+#    #+#             */
/*   Updated: 2023/05/14 19:11:59 by msilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*current;

	new = NULL;
	while (lst != NULL)
	{
		current = ft_lstnew(f(lst -> content));
		if (!current)
		{
			ft_lstdelone(current, del);
			return (NULL);
		}
		ft_lstadd_back(&new, current);
		lst = lst -> next;
	}
	return (new);
}

/* void	*ft_big(void *lst)
{
	char	*str = (char *)lst;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		str[i] -= 32;
	}
	return (str);
}

void	ft_mostra(void *isto)
{
	char	*str = (char *)isto;
	printf("%s ->", str);
}

int main(void)
{
	t_list	*one = ft_lstnew(ft_strdup("one"));
	t_list	*two = ft_lstnew(ft_strdup("two"));
	t_list	*three = ft_lstnew(ft_strdup("three"));
	
	one -> next = two;
	two -> next = three;
	t_list	*result = ft_lstmap(one, ft_big, free);
	ft_lstiter(result, ft_mostra);
}
 */