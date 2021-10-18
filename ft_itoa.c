/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/18 20:37:09 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_size(int num)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (num == 0)
	{
		size++;
	}
	while (num != 0 || ft_isalpha(num) == 1)
	{
		size++;
		num = num / 10;
		i++;
	}
	return (size);
}

static	char	module(int num, int signal)
{
	char	aux;

	aux = ((num % 10) * signal) + '0';
	return (aux);
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
	int		len;

	len = array_size(n);
	if (n < 0)
		len++;
	signal = signal_check(n);
	string = (char *) malloc (len * sizeof(char *) + 1);
	if (n < 0)
		string[0] = '-';
	if (string == NULL)
		return (NULL);
	if (n == 0)
		*string = '0';
	string[len] = '\0';
	while (n != 0)
	{
		len--;
		string[len] = module(n, signal);
		n = n / 10;
	}
	return (string);
}
