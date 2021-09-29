/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/09/29 03:20:43 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_size(int num)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (num < 0)
	{
		size++;
		i++;
	}	
	while (num != 0)
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
	*aux = (num % 10) * signal + '0';
	return (aux);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		signal;
	int		len;
	char	*aux;

	aux = NULL;
	signal = 1;
	len = array_size(n);
	string = malloc (len * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (n < 1)
	{
		signal = -1;
		string[0] = '-';
	}
	len--;
	while (n != 0)
	{
		aux = module(n, signal);
		string[len] = *(char *) aux;
		n = n / 10;
		len--;
	}
	return (string);
}
