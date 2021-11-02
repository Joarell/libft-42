/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 05:50:25 by Jev               #+#    #+#             */
/*   Updated: 2021/11/02 17:06:49 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
	{
		return ;
	}
	del (lst->content);
	free(lst);
	lst = NULL;
}

#include <stdio.h>

int main (void)
{
	t_list	*balaio;
	char	first[] = {"Bolo"};
	char	second[] = {"Chololate"};
	char	third[] = {"Baunilha"};
	char	fourth[] = {"chantilly"};
	int		i;

	balaio = NULL;
	ft_lstadd_front(&balaio, ft_lstnew(&first));
	ft_lstadd_front(&balaio, ft_lstnew(&second));
	ft_lstadd_front(&balaio, ft_lstnew(&third));
	ft_lstadd_back(&balaio, ft_lstnew(&fourth));
	i = ft_lstsize(balaio);
	while (i--)
	{
		printf("%s\n", (char *)balaio->content);
		balaio = balaio->next;
	}
	return (0);
}
