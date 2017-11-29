/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 19:34:42 by psprawka          #+#    #+#             */
/*   Updated: 2017/09/21 19:34:44 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>

/*
** ---------------------------------- INTEGER TO STRING --------------------------------------
*/

static void		count(int n, unsigned int *size)
{
	if (n != 0)
	{
		*size += 1;
		count(n / 10, size);
	}
	else
		return ;
}

static void		fill_table(int if_neg, int n, char *tab, int size)
{
	tab += size;
	*tab-- = '\0';
	if (n == -2147483648)
	{
		*tab-- = '8';
		size--;
		n = 214748364;
	}
	else
		n = (if_neg == 1 ? n - n - n : n);
	while (size-- > 0)
	{
		if ((if_neg == 1) && (size == 0))
			*tab = '-';
		else
			*tab-- = n % 10 + 48;
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	unsigned int	size;
	char			*tab = NULL;
	int				if_neg;

	if_neg = (n < 0 ? 1 : 0);
	size = (n < 0 ? 1 : 0);
	count(n, &size);
	size = (n == 0 ? 1 : size);
	if (!(tab = (char *)malloc(size + 1)))
		return ((char *)'\0');
	
	fill_table(if_neg, n, tab, size);
	return (tab);
}

/*
** ----------------------------------- FLOAT TO STRING --------------------------------------
*/

/*
**	DO NOT LISTEN A COMMET IN QUOTES BELOW!
**
**	"Round_down < 10 because we want to leave while loop once our float nb == 10,
**	but since we want to cast nb == 10.000000 (float!) to round_down (int!)
**	it will be rounded down to 9, so we need to add 0.000001 to float number (round up!)
**	If you don't get it, use while loop attached below instead of while loop in my code:"
**
**	while (round_down < 10)
**	{
**	nb *= 10;
**	if (round_down = (int)(nb + 0.000001) != 10)
**		rest[i++] = (int)(nb + 48 + 0.000001);
**	printf("[%f]\n", nb);
**	printf("round: %d\n", round_down);
**	nb -= (int)nb;
**	printf("str: %s\n", rest);
**	}
*/

void	create_string(double nb, char *rest, int i)
{
	int		afterdots = 0;
	int		dot = 0;
	
	if (nb < 1)
	{
		rest[i++] = '.';
		dot = i;
		while (afterdots < 6)
		{
			nb *= 10;
			if (((int)(nb + 0.000001)) != 10)
				rest[i++] = (int)(nb + 48 + 0.000001);
			nb -= (int)nb;
			afterdots++;
		}
	}
	while (i - dot < 6)
		rest[i++] = '0';
	rest[i] = '\0';
}


char			*ft_ftoa(double n)
{
	char	*first;
	char	flt[100];
	int		i, nb;

	i = -1;
	nb = (int)n;
	first = ft_itoa(nb);
	n -= (float)nb;
	if (n < 0)
		n *= -1;
	while (first[++i])
		flt[i] = first[i];
	create_string(n, flt, i);
	first = flt;
	return (first);
}

