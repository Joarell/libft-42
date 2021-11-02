/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:14:35 by Jev               #+#    #+#             */
/*   Updated: 2021/10/28 06:45:28 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux_n;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		aux_n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux_n;
	}
	*lst = NULL;
}
