/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:44:55 by Jev               #+#    #+#             */
/*   Updated: 2021/11/07 12:35:39 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

 //Sample program to show that memmove() is better than
int main(void)
{
	char str[100] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;

	printf("Original string :%s\n ", str);
	
	//when overlap happens then it just ignore it
	ft_memmove(second, first, 12);
	second = str;
    printf("memcpy overlap : %s\n ", str);
	printf("%d \n", ft_isalpha(str[0]));

	// when overlap it start from first position
	strlcpy(second, first, 5 * sizeof(char));
	printf("memmove overlap : %s\n ", str);

	return (0);
}

static	void del_one(void *content)
{
	free(content);
}

static	void	*shift_upper(void *content)
{
	char	*shift;
	int		i;

	shift = (char *) content;
	i = 0;
	while (shift[i] != '\0')
	{
		shift[i] = ft_toupper(shift[i]);
		i++;
	}
	return ((void *) shift);
}

#include <stdio.h>

int main (void)
{
	t_list	*balaio;
	t_list	*aux;
	char	first[] = {"Bolo"};
	char	second[] = {"Chololate"};
	char	third[] = {"Baunilha"};
	char	fourth[] = {"chantilly"};
	int		i;

	balaio = NULL;
	ft_lstadd_front(&balaio, ft_lstnew(&first));
	ft_lstadd_front(&balaio, ft_lstnew(&second));
	ft_lstadd_front(&balaio, ft_lstnew(&third));
	ft_lstadd_front(&balaio, ft_lstnew(&fourth));
	aux = ft_lstlast(balaio);
	i = ft_lstsize(balaio);
	aux = ft_lstmap(balaio, shift_upper, del_one);

	i = ft_lstsize(aux);
	while (i--)
	{
		printf("%s\n", (char *)aux->content);
		aux = aux->next;
	}
	return (0);
}
int main(void)
{
    char test1[18] = "Testando a parada";
	char test2[9] = "Changing";
	char *before;
	char *after;

	after = test2;
	before = test1;
    printf("testando a função memset: %s \n", test2);
	memmove(after, before, 11 * sizeof(char));
	
    printf("testando a função memset: %s \n", test2);
    return (0);
}

#include <stdio.h>

int main(void)
{
	char test[20] = "\n \ti Testando \n \t";
	char trash[5] = "\n \t";
	//char test1;
	char *result;

	//test1 = ' ';
	result = ft_strtrim(test, trash);
	printf("%s\n", result);
	printf("%d\n", ft_strlen(test));
	printf("%d\n", ft_strlen(result));
	free(result);
	return (0);
}


#include <stdio.h>
#include <string.h>

int main(void)
{
	char	test1[] = "test\200";
	char	test2[] = "test\0";
	int		restult;
	unsigned char	a;
	unsigned char	b;

	a = '\200';
	b = '\0';
	restult = strncmp(test1, test2, 6);
	printf("%d \n", restult);
	printf("%d \n", a - b);
	printf("%d \n", a > b);
	return (0);
}

int main(void)
{
	int	test1;
	int	test2;


	test1 = -2147483648;
	test2 = -2147483648;

	ft_putnbr_fd(test2, test1);
	return (0);
}


#include <stdio.h>

int main(void)
{
	t_list	*bala;
	int	new;
	int novo;
	int nuevo;

	new = 10;
	novo = 11;
	nuevo = 12;
	bala = NULL;
	ft_lstadd_front(&bala, ft_lstnew(&new));
	ft_lstadd_front(&bala, ft_lstnew(&novo));
	ft_lstadd_front(&bala, ft_lstnew(&nuevo));
	printf("%d\n", *(int *)ft_lstlast(bala));
	return (0);
}

#include <stdio.h>

int main(void)
{
	t_list	*bala;
	int	new;
	int novo;

	new = 10;
	novo = 11;
	bala = NULL;
	ft_lstadd_front(&bala, ft_lstnew(&new));
	ft_lstadd_front(&bala, ft_lstnew(&novo));
	while (bala)
	{
		printf("%d\n", *(int *)bala->content);
		bala = bala->next;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	t_list	*bala;
	char	n[] = "10";

	bala = ft_lstnew(n);
	printf("%s\n", (char *) bala->content);
	return (0);
}

#include <stdio.h>

int main (void)
{
	char	test[23] = "ainda aprendendo";
	char	**result;

	result = ft_split(test, ' ');

	printf("%s \n", result[0]);
	printf("%s \n", result[1]);
	printf("%s \n", result[2]);
	free(result);

	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char test[15] = "    Testando";
	//char trash[5] = " ";
	char test1;
	char *result;

	test1 = ' ';
	result = ft_strtrim(test, &test1);
	printf("%s \n", result);
	free(result);
	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char test[19] = "andoTestando";
	char trash[5] = "ando";
	char *result;

	result = ft_strnstr(test, trash, 8);
	printf("%s \n", strnstr(test, trash, 8));
	printf("%s \n", result);

	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char test[19] = "andoTestando";
	char trash[5] = "ando";
	char *result;

	result = ft_strtrim(test, trash);
	printf("%s \n", result);
	free(result);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char word1[6] = "bo";
	char word2[6] = "la";

	printf("%s \n", ft_strjoin(word1, word2));
	free(ft_strjoin(word1, word2));
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char word[15] = "Pão de queijo";
	
	printf("%s \n", ft_substr(word, 0, 14 * sizeof(char)));
	free(ft_substr(word, 0, 14 * sizeof(char)));
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	up[9] = "Testando";
	char	*cpy;

	cpy = strdup(up);
	printf("%s \n", cpy);
	return (0);
}


#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	test[] = {"batata"};
	
	ft_putendl_fd(test, 'a');
	return (0);
}

#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		arq;
	char	array;
	char	test[] = {"batata"};
	
	arq = open("/home/joarell/Desktop/file.txt", O_RDONLY);
	read(arq, &array, 1);
	ft_putstr_fd(test, 'a');
	return (0);
}


#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		arq;
	char	array;
	
	arq = open("/home/joarell/Desktop/file.txt", O_RDONLY);
	read(arq, &array, 1);
	ft_putchar_fd('b', array);
	return (0);
}

#include <stdio.h>
int main(void)
{
	char	testing[] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";

	ft_striteri(testing, ft_striteri_ft);
	printf("%s \n", testing);
	return (0);
}

static void	ft_striteri_ft(unsigned int i, char *c)
{
	*c = ft_toupper(*c + i);
}


#include <stdio.h>
int main(void)
{
	char	testing[] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
	char	*str;


	str = ft_strmapi(testing, ft_strmapi_ft);
	printf("%s \n", str);
	return (0);
}
static char	ft_strmapi_ft(unsigned int i, char c)
{
	(void) i;
	return (c = ft_toupper(c) + i);
}

#include <stdio.h>
int main (void)
{
	int	test;
	
	test = 1512312364;
	printf("%s \n", ft_itoa(test));
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int  i;
	int *mem;
	int test[3] = {1, 2, 3};
	mem = (int *) calloc(1, sizeof(int));
	
	i = 0;
	while(test[i] != '\0')
	{
		mem [i] = test [i];
		i++;
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char str[3] = "-0";
	
	printf("%d \n", atoi(str));
	printf("%d \n", ft_atoi(str));
	return (0);
}

#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char vet1[22] = "vendo robôs gigantes";
	char vet2[6] = "robôs";

	char *result;

	result = strnstr(vet1, vet2, 12);
	printf("%s \n", ft_strnstr(vet1, vet2, 12));
	printf("%s \n", result);
	return (0);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char test[23] = "Bolo de chocolate";
	char *result;

	result = strchr(test, 't');

	printf("%s \n", result);
	return (0);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char test1[9] = "testando";
	char test2[15] = "test2";

	printf("%d \n", strncmp(test1, test2, 5));
	printf("%d \n", ft_strncmp(test1, test2, 5));
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char vet1[7] = "Baratu1";
	char vet2[7] = "Baratu2";

	printf("%d \n", memcmp(vet1, vet2, 8));
	printf("%d \n", ft_memcmp(vet1, vet2, 8));
	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char A[14] = "Balão voando.";
	char B[5] = "Pato";
	
	printf("%s \n", A);
	ft_strlcat(A, B, 18 * sizeof(char)); 
	printf("%s \n", A);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int test;

	test = '8';
	printf("%c \n", toupper(test));
	return (0);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char A[15] = "Balão voando.";
	char B[14] = "Pato na lagoa";
	
	printf("%s \n", A);
	strlcpy(A, B, 15 * sizeof(char)); 
	printf("%s \n", A);
	return (0);
}

***************************************************************
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len += (dst - src) == 0)
	{
		return(0);
	}
	*(char *) dst = *(char *) src;
	src++;
	dst++;
	len--;
	return (ft_memmove(dst, src, len - 1));
}
********************************************************************

int main(void)
{
    char test[18] = "Testando a parada";

    ft_memset(test , '.', 9 * sizeof(char));
    printf("Testando a função memset: %s \n", test);
c   return (0);
}*/
