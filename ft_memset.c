/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 02:44:53 by Jev               #+#    #+#             */
/*   Updated: 2021/09/05 23:12:01 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, char len)
{

	while ((unsigned char) len > 0)
	{
		*(char *) dest = (char) c;
		dest++;
		len--;
	}
	return (0);
}