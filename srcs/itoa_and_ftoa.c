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

void		ucount(unsigned long long int nb, unsigned int *size)
{
	while (nb != 0)
	{
		*size += 1;
		nb /= 10;
	}
}

char	*ft_ulltoa(unsigned long long nb)
{
	char *str;
	unsigned int size;
//	printf("HEREEE\n");
	size = 0;
	str = (char *)malloc(21);
	ucount(nb, &size);
	
	str[size--] = '\0';
	
	while (size-- > 0)
	{
		str[size--] = nb % 10 + 48;
		nb /= 10;
	}
//	printf("[%s]\n", str);
	return (str);
}


/*
** ---------------------------------- INTEGER TO STRING --------------------------------------
*/

void		count(long long int n, unsigned int *size)
{
	while (n != 0)
	{
		*size += 1;
		n /= 10;
	}
}

void		fill_table(int if_neg, long long int n, char *tab, int size)
{
	tab += size;
	
	*tab-- = '\0';
	if (n == -9223372036854775807 - 1)
	{
		*tab-- = '8';
		n /= 10;
		size--;
	}
	if (n > 9223372036854775807)
	{
		n = -9223372036854775807 + (n - 9223372036854775807) - 1;
		if_neg = 1;
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
//	printf("tab: %s\n", tab);
}

char			*ft_itoa(long long int n)
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
	char	*flt;
	char	*first;
	int		i, nb;

	i = -1;
	nb = (int)n;
	first = ft_itoa(nb);
	flt = (char *)malloc(100);
	n -= (double)nb;
	if (n < 0)
		n *= -1;
	while (first[++i])
		flt[i] = first[i];
	create_string(n, flt, i);
	return (flt);
}
