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


int		colors(char *string, t_flags *flag_bag)
{
	if (ft_strcmp(string, BLACK) == 0 || ft_strcmp(string, BLUE) == 0 || ft_strcmp(string, YELLOW) == 0 ||
			ft_strcmp(string, NORMAL) == 0 || ft_strcmp(string, GREEN) == 0 || ft_strcmp(string, MAGNETA) == 0 ||
			ft_strcmp(string, CYAN) == 0 || ft_strcmp(string, RED) == 0 ||ft_strcmp(string, WHITE) == 0)
	{
		ft_putstr(string, flag_bag);
		return (1);
	}
	return (0);
}

/*
** print_width prints both precision and width for either characher or string
*/

#include <stdio.h>
void	print_width(t_flags *flag_bag)
{
	int i;
	
	i = -1;
	if (flag_bag->precision < 0)
	{
		if (flag_bag->type == 's')
			flag_bag->width = flag_bag->precision * -1 + flag_bag->len;
		else
			flag_bag->width = flag_bag->precision * -1;
		flag_bag->zero = false;
	}
	if (flag_bag->zero == true)
		while (++i < flag_bag->width - flag_bag->len)
			ft_putchar('0', flag_bag);
	else
		while (++i < flag_bag->width - flag_bag->len)
			ft_putchar(' ', flag_bag);
}

/*
** ------------------------------------ STRING - S ------------------------------------------
*/


void	print_string(t_flags *flag_bag, va_list ap)
{
	char *str;
	int i;
	
	str = va_arg(ap, char *);
	
	str = (str == NULL ? "(null)" : str);
	if (colors(str, flag_bag) == 1)
		return ;
	flag_bag->len = (flag_bag->ifprec > -1 && flag_bag->precision < ft_strlen(str) &&
		   flag_bag->ifprec == true ) ? flag_bag->precision : ft_strlen(str);
	
	if (flag_bag->minus == false)
		print_width(flag_bag);
	
	i = 0;
	if (flag_bag->ifprec == true)
		while (i < flag_bag->precision && str[i] != '\0')
			ft_putchar(str[i++], flag_bag);
	else
		while (str[i] != '\0')
			ft_putchar(str[i++], flag_bag);
	if (flag_bag->minus == true)
		print_width(flag_bag);
}

/*
** ----------------------------------- CHAR - c, C ------------------------------------------
*/

void	print_char(t_flags *flag_bag, va_list ap)
{
	unsigned char x;
	
	x = (unsigned char)va_arg(ap, int);
	flag_bag->len = 1;
	if (flag_bag->minus == false && flag_bag->precision > -1)
		print_width(flag_bag);
	
	ft_putchar(x, flag_bag);
	
	if (flag_bag->minus == true || flag_bag->precision < 0)
		print_width(flag_bag);
}
