/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:12:58 by Jev               #+#    #+#             */
/*   Updated: 2021/10/03 01:36:54 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		lenn;

	lenn = 0;
	while (s[lenn])
		lenn++;
	write(1, s, lenn);
}

static char		mapi(unsigned int j, char c)
{
	static int indexArray[11] = {0};

	if (j > 10 || indexArray[j] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[j] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		len;
	int		i;

	len = ft_strlen(s);
	new = malloc(len * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		new[i] = (*f)(i, *s);
		i++;
		s++;
	}
	return (new);
}

int				main(int argc, const char *argv[])
{
	char	*str;
	char	*strmapi;

	alarm(5);
	str = (char *)malloc(sizeof(*str) * 12);
	if (argc == 1 || !str)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
			strcpy(str, "LoReM iPsUm");
			if (!(strmapi = ft_strmapi(str, &mapi)))
				ft_print_result("NULL");
			else
			{
				ft_print_result(strmapi);
				if (strmapi[11] != '\0')
					ft_print_result("\nString is not null terminated");
				if (strmapi == str)
					ft_print_result("\nA new string was not returned");
				else
					free(strmapi);
			}
	}
	free(str);
	return (0);
}
