/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:18:05 by Jev               #+#    #+#             */
/*   Updated: 2021/09/19 17:05:23 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	aux;

	sign = 1;
	if (*str == 0 || *str == '\0')
		return (0);
	if (*str == '-')
	{
		sign = -1;
	}
	str++;
	if (ft_isdigit(*str) == 0)
		return (0);
	aux = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str) == 1)
		{
			aux *= 10;
			aux += (*str - '0') * sign;
		}
		str++;
	}
	return (aux);
}
