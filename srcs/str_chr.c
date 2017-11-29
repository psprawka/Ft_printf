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

/*
** print_width prints both precision and width for either characher or string
*/

void	print_width(t_flags *flag_bag, int len)
{
	int i;
	
	i = -1;
	if (flag_bag->precision < 0)
	{
		if (flag_bag->type == 's')
			flag_bag->width = flag_bag->precision * -1 + len;
		else
			flag_bag->width = flag_bag->precision * -1;
		flag_bag->zero = false;
	}
	if (flag_bag->zero == true)
		while (++i < flag_bag->width - len)
			ft_putchar('0');
	else
		while (++i < flag_bag->width - len)
			ft_putchar(' ');
}

/*
** ------------------------------------ STRING - S ------------------------------------------
*/


void	print_string(t_flags *flag_bag, va_list ap)
{
	char *str;
	int len;
	int i;
	
	str = va_arg(ap, char *);
	len = (flag_bag->ifprec > -1 && flag_bag->precision < ft_strlen(str) &&
		   flag_bag->ifprec == true ) ? flag_bag->precision : ft_strlen(str);
	if (flag_bag->minus == false)
		print_width(flag_bag, len);
	i = 0;
	if (flag_bag->ifprec == true)
		while (i < flag_bag->precision && str[i] != '\0')
			ft_putchar(str[i++]);
	else
		while (str[i] != '\0')
			ft_putchar(str[i++]);
	if (flag_bag->minus == true)
		print_width(flag_bag, len);
}

/*
** ----------------------------------- CHAR - c, C ------------------------------------------
*/

void	print_char(t_flags *flag_bag, va_list ap)
{
	unsigned char x;
	
	x = (unsigned char)va_arg(ap, int);
	if (flag_bag->minus == false && flag_bag->precision > -1)
		print_width(flag_bag, 1);
	
	ft_putchar(x);
	if (flag_bag->minus == true || flag_bag->precision < 0)
		print_width(flag_bag, 1);
}
