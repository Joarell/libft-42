/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/26 09:07:17 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_size(int num)
{
	int	size;

	size = 0;
	if (num < 0)
		size++;
	while (num != 0)
	{
		size++;
		num = num / 10;
	}
	size++;
	return (size);
}

static int	signal_check(int num)
{
	int	sig;

	sig = 1;
	if (num < 0)
	{
		sig = -1;
	}
	return (sig);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		signal;
	size_t	len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	len = array_size(n);
	signal = signal_check(n);
	string = (char *)malloc(len * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[len] = '\0';
	if (n < 0)
		string[0] = '-';
	while (len--)
	{
		string[len] = (n % 10) * signal + '0';
		n = n / 10;
	}
	return (string);
}
