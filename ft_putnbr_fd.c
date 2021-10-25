/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 01:19:41 by Jev               #+#    #+#             */
/*   Updated: 2021/10/25 07:48:05 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	num = 0;
	if (n == 0)
	{
		return ;
	}
	if (n == '-')
	{
		num = '-';
	}
	if (n >= INT_MIN && n <= INT_MAX)
	{
		num = n % 10 + '0';
		n /= 10;
		ft_putchar_fd(num, fd);
		return (ft_putnbr_fd(n, fd));
	}
}

int main(void)
{
	ft_putnbr_fd(1234, 1);
	return(0);
}
