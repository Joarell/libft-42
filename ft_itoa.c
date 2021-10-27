/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:47:34 by Jev               #+#    #+#             */
/*   Updated: 2021/10/26 23:02:28 by Jev              ###   ########.fr       */
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
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = array_size(n);
	string = (char *)malloc(len * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[len--] = '\0';
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (len--)
	{
		string[len] = ((n % 10) + '0');
		n = n / 10;
	}
	return (string);
}

#include <stdio.h>

int main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("$%s$", str);
	free(str);
	return (0);
}
