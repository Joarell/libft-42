/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:18:05 by Jev               #+#    #+#             */
/*   Updated: 2021/09/27 00:18:43 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	if (*str == 0 || *str == '\0')
		return (0);
	if (*str == '-')
		sign = -1;
	str++;
	i = 0;
	while (*str != '\0' && ft_isalpha(*str) == 0)
	{
		if (ft_isdigit(*str) == 1)
		{
			i *= 10;
			i += (*str - '0') * sign;
		}
		str++;
	}
	return (i);
}
