/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 01:19:41 by Jev               #+#    #+#             */
/*   Updated: 2021/11/04 23:38:20 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	negative_putnbr(int n, int fd)
{
	char	num;

	if (n == 1)
	{
		return ;
	}
	if (!n)
	{
		negative_putnbr(1, fd);
		return (ft_putchar_fd('-', fd));
	}
	else if (n)
	{
		num = (n % 10) * (-1) + '0';
		negative_putnbr(n / 10, fd);
		return (ft_putchar_fd(num, fd));
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char		num;
	static int	before;

	if (!n)
	{
		if (before == 0)
		{
			ft_putchar_fd('0', fd);
			return ;
		}
		return ;
	}
	else if (n < 0)
	{
		return (negative_putnbr(n, fd));
	}
	else if (n && n <= INT_MAX)
	{
		before = n;
		num = (n % 10) + '0';
		ft_putnbr_fd(n / 10, fd);
		return (ft_putchar_fd(num, fd));
	}
}
