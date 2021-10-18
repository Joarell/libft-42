/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 01:19:41 by Jev               #+#    #+#             */
/*   Updated: 2021/10/18 20:15:11 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = NULL;
	if (n >= INT_MIN && n <= INT_MAX)
	{
		num = ft_itoa(n);
	}
	while (*num != '\0')
	{
		ft_putchar_fd(*num, fd);
		num++;
	}
}
