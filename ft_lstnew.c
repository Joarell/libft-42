/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:55:04 by Jev               #+#    #+#             */
/*   Updated: 2021/10/29 19:46:22 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_e;

	new_e = (t_list *) malloc (sizeof(t_list));
	if (new_e == NULL)
	{
		return (NULL);
	}
	new_e->content = content;
	new_e->next = NULL;
	return (new_e);
}
