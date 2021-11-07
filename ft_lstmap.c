/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:59:43 by Jev               #+#    #+#             */
/*   Updated: 2021/11/07 12:36:17 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_n;
	t_list	*new_ele;

	if (!lst)
		return (NULL);
	list_n = NULL;
	new_ele = NULL;
	while (lst)
	{
		new_ele = ft_lstnew(f(lst->content));
		if (!new_ele)
		{
			ft_lstclear(&list_n, del);
			return (NULL);
		}
		ft_lstadd_back(&list_n, new_ele);
		lst = lst->next;
	}
	return (list_n);
}
