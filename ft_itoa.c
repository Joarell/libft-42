/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 23:33:26 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	array_size(int num)
{
	size_t	size;

	size = 0;
	if (num == 0)
	{
		size++;
	}
	while (num != 0 || ft_isalpha(num) == 1)
	{
		size++;
		num = num / 10;
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
	size_t	len;

	len = array_size(n);
	if (n < 0)
		len++;
	signal = signal_check(n);
	string = (char *) malloc (len * sizeof(char *));
	if (string == NULL)
		return (NULL);
	if (n == 0)
		*string = '0';
	string[len] = '\0';
	if (n < 0)
		string[0] = '-';
	while (n != 0)
	{
		len--;
		string[len] = module(n, signal);
		n = n / 10;
	}
	return (ft_strdup(string));
}
