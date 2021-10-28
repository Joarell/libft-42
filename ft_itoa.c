/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/28 18:46:48 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_size(int num)
{
	int	size;

	size = 0;
	if (num < 0)
	{
		size++;
		num = -num;
	}
	while (num != 0)
	{
		size++;
		num = num / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = array_size(n);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[len--] = '\0';
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (n)
	{
		string[len--] = ((n % 10) + '0');
		n = n / 10;
	}
	return (string);
}
