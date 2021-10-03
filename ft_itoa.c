/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/02 23:55:07 by Jev              ###   ########.fr       */
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

static	char	*module(int num, int signal)
{
	char	*aux;

	aux = malloc (sizeof(char));
	if (aux == NULL)
	{
		return (NULL);
	}
	*aux = ((num % 10) * signal) + '0';
	return (aux);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		signal;
	int		len;

	signal = 1;
	len = array_size(n);
	string = malloc (len * sizeof(char *));
	if (string == NULL)
		return (NULL);
	if (n == 0)
		*string = '0';
	if (n < 0)
	{
		signal = -1;
		string[0] = '-';
		len++;
	}
	while (n != 0)
	{
		len--;
		string[len] = *(char *) module(n, signal);
		n = n / 10;
	}
	return (string);
}
