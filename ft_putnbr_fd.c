/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 01:19:41 by Jev               #+#    #+#             */
/*   Updated: 2021/10/02 20:58:18 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;
	char	*file_d;

	num = NULL;
	file_d = NULL;
	if (n >= INT_MIN && n <= INT_MAX)
	{
		num = ft_itoa(n);
		file_d = ft_itoa(fd);
	}
	while (*num == *file_d && *num != '\0')
	{
		write(1, &*num, 1);
		num++;
		file_d++;
	}
}
