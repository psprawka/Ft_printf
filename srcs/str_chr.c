/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:34:05 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 11:34:07 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"


int		colors(char *s, t_flags *bag)
{
	if (ft_strcmp(s, BLACK) == 0 || ft_strcmp(s, BLUE) == 0 || ft_strcmp(s, YELLOW) == 0 ||
			ft_strcmp(s, NORMAL) == 0 || ft_strcmp(s, GREEN) == 0 || ft_strcmp(s, MAGNETA) == 0 ||
			ft_strcmp(s, CYAN) == 0 || ft_strcmp(s, RED) == 0 ||ft_strcmp(s, WHITE) == 0)
	{
		ft_putstr(s, bag);
		return (1);
	}
	return (0);
}

/*
** print_width prints both precision and width for either characher or string
*/

#include <stdio.h>
void	print_width(t_flags *bag)
{
	int i;
	
	i = -1;
	if (PRECISION < 0)
	{
		if (TYPE == 's')
			WIDTH = PRECISION * -1 + LEN;
		else
			WIDTH = PRECISION * -1;
		ZERO = false;
	}
	if (ZERO == true)
		while (++i < WIDTH - LEN)
			ft_putchar('0', bag);
	else
		while (++i < WIDTH - LEN)
			ft_putchar(' ', bag);
}

/*
** ------------------------------------ STRING - S ------------------------------------------
*/


void	print_string(t_flags *bag, va_list ap)
{
	char *str;
	int i;
	
	str = va_arg(ap, char *);
	
	str = (str == NULL ? "(null)" : str);
//	if (colors(str, bag) == 1)
//		return ;
	LEN = (PRECISION < ft_strlen(str) && IF_PREC == true) ? PRECISION : ft_strlen(str);
	
	if (MINUS == false)
		print_width(bag);
	
	i = 0;
	if (IF_PREC == true)
		while (i < PRECISION && str[i] != '\0')
			ft_putchar(str[i++], bag);
	else
		while (str[i] != '\0')
			ft_putchar(str[i++], bag);
	if (MINUS == true)
		print_width(bag);
}

/*
** ----------------------------------- CHAR - c, C ------------------------------------------
*/

void	print_char(t_flags *bag, va_list ap)
{
	unsigned char x;
	
	x = (unsigned char)va_arg(ap, int);
	LEN = 1;
	if (MINUS == false && PRECISION > -1)
		print_width(bag);
	
	ft_putchar(x, bag);
	
	if (MINUS == true || PRECISION < 0)
		print_width(bag);
}
