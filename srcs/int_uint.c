/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:19:42 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 14:19:44 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** print_width_int prints both precision and width
*/

long long int assign_value(t_flags *flag_bag, va_list ap)
{
	if (flag_bag->type != 'i' && flag_bag->type != 'd' && flag_bag->type != 'o' &&
		flag_bag->type != 'u' && flag_bag->type != 'O' &&
		flag_bag->type != 'x' && flag_bag->type != 'X')
		flag_bag->argument = 0;
	
	if (flag_bag->argument == 1)
		return (((flag_bag->type == 'i' || flag_bag->type == 'd')) ? (short int)(va_arg(ap, void*)) : (unsigned short int)(va_arg(ap, void*)));
	if (flag_bag->argument == 2)
		return ((flag_bag->type == 'i' || flag_bag->type == 'd') ? (char)va_arg(ap, void*) : (unsigned char)(va_arg(ap, void*)));
	if (flag_bag->argument == 3 || flag_bag->type == 'D')
		return ((flag_bag->type == 'i' || flag_bag->type == 'd' || flag_bag->type == 'D') ? (long int)va_arg(ap, void*) : (unsigned long int)(va_arg(ap, void*)));
	if (flag_bag->argument == 4)
		return ((flag_bag->type == 'i' || flag_bag->type == 'd') ? (long long int)va_arg(ap, void*) : (unsigned long long int)va_arg(ap, void*));
	if (flag_bag->argument == 5)
		return ((flag_bag->type == 'i' || flag_bag->type == 'd') ? (intmax_t)va_arg(ap, void*) : (uintmax_t)va_arg(ap, void*));
	if (flag_bag->argument == 6)
		return ((size_t)va_arg(ap, void*));
	
	if (flag_bag->type == 'd' || flag_bag->type == 'i')
		return ((int)va_arg(ap, void*));
	if (flag_bag->type == 'U' || flag_bag->type == 'O')
		return ((unsigned long int)va_arg(ap, void*));
	if (flag_bag->type == 'u' || flag_bag->type == 'o' || flag_bag->type == 'X' || flag_bag->type == 'x')
		return ((unsigned int)va_arg(ap, void*));
	return ((long long int)NULL);
}


#include <stdio.h>
/*
** ------------------------------------ INT - i, d, D --------------------------------------
*/

void	parse_int(t_flags *flag_bag, long int nb)
{
	flag_bag->len = (nb == 0 && flag_bag->ifprec == true ? 0 : ft_strlen(ft_itoa(nb)));
	nb < 0 ? flag_bag->len-- : flag_bag->len;
	flag_bag->precision -= flag_bag->len;
	flag_bag->width -= flag_bag->precision > 0 ? flag_bag->precision + flag_bag->len : flag_bag->len;
	flag_bag->plus == true || nb < 0 ? flag_bag->width-- : flag_bag->width;
	flag_bag->zero = flag_bag->ifprec == true || flag_bag->space == true ? false : flag_bag->zero;
	flag_bag->width = flag_bag->space == true && flag_bag->width < 1 && nb > 0 ? 1 : flag_bag->width;
}

void	print_int(t_flags *flag_bag, va_list ap)
{
	long int nb;
	
	nb = assign_value(flag_bag, ap);
	parse_int(flag_bag, nb);
	if (flag_bag->zero == true)
		print_plus(flag_bag, &nb);
	if (flag_bag->minus == false)
		while (flag_bag->width-- > 0)
			flag_bag->zero == true ? ft_putchar('0', flag_bag) : ft_putchar(' ', flag_bag);
	print_plus(flag_bag, &nb);
	while (flag_bag->precision-- > 0)
		ft_putchar('0', flag_bag);
	if ((flag_bag->len > 0) || (nb == 0 && flag_bag->ifprec == false))
		ft_putnbr(nb, flag_bag);
	while (flag_bag->width-- > 0)
		ft_putchar(' ', flag_bag);
}

/*
** -------------------------------- UNSIGNED INT - o, O, u, U, x, X -----------------------------------
*/

void	parse_unsigned_int(t_flags *flag_bag)
{
	flag_bag->display = flag_bag->ifprec == true && flag_bag->precision == 0 && ((flag_bag->hash == false)
							|| (flag_bag->hash == true && (flag_bag->type == 'x' || flag_bag->type == 'X'))) ? false : true;
	flag_bag->width -= (flag_bag->type == 'x' || flag_bag->type == 'X') && flag_bag->hash == true ? 2 : 0;
	flag_bag->width -= (flag_bag->type == 'o' || flag_bag->type == 'O') && flag_bag->hash == true ? 1 : 0;
	flag_bag->minus = flag_bag->precision < 0 ? true : flag_bag->minus;
	flag_bag->width = (flag_bag->precision < 0) ? flag_bag->precision * -1 : flag_bag->width;
	flag_bag->precision -= flag_bag->len;
	flag_bag->width -= flag_bag->precision > 0 ? flag_bag->precision + flag_bag->len : flag_bag->len;
	flag_bag->plus == true ? flag_bag->width-- : flag_bag->width;
	flag_bag->zero = flag_bag->ifprec == true || flag_bag->space == true ? false : flag_bag->zero;
}

void	print_unsigned_int(t_flags *flag_bag, va_list ap)
{
	unsigned long int nb;
	char *print;
	
	nb = assign_value(flag_bag, ap);
	print = convert(flag_bag, nb);
	flag_bag->len = nb == 0 ? 0 : ft_strlen(print);
	parse_unsigned_int(flag_bag);
	if (flag_bag->zero == true)
		print_hash(flag_bag, nb);
	if (flag_bag->minus == false)
		while (flag_bag->width-- > 0)
			flag_bag->zero == true ? ft_putchar('0', flag_bag) : ft_putchar(' ', flag_bag);
	print_hash(flag_bag, nb);
	while (flag_bag->precision-- > 0)
		ft_putchar('0', flag_bag);
	if (flag_bag->display == true)
		ft_putstr(print, flag_bag);
	while (flag_bag->width-- > 0)
		ft_putchar(' ', flag_bag);
	free(print);
}
