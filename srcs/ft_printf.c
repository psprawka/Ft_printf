/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:32:10 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/08 14:32:13 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** argument prototype: %[flags][width/margin][.precision][hh|h|l|ll|j|z]type
**
** flags:			'+' || '-' || ' ' || '#' || '0';
**
** width/margin:	min amount of displayed digits, does not cut digits if less,
**					fill with spaces on the left side;
**					if '*' added it's necessary to pass one more parameter with a
**					number of spaces before the actual parameter;
**
** .precision:		for diouxX min amount of digits, fill with 0 is necessary;
**					for eEf amount of digits after dot;
**					for gG amount of all digits, if bigger displays number;
**					for sS max amount of characters;
**					if '*' added is necessary to pass one more parameter with a
**					number of spaces before the actual parameter;
**
** hh|h|l|ll|j|z:	default values' modification:
**					hh: for idouxX - char;
**					h: for idouxX - short int;
**					l: for idouxX - long int, for feE - double;
**					ll: for idouxX - long long int;
**					j: for idouxX - intmax_t;
**					z: for idouxX - size_t;
*/

void	bulid_bag(t_flags *flag_bag)
{
	flag_bag->minus = false;
	flag_bag->plus = false;
	flag_bag->space = false;
	flag_bag->hash = false;
	flag_bag->zero = false;
	flag_bag->ifprec = false;
	flag_bag->type = 0;
	flag_bag->width = 0;
	flag_bag->precision = 0;
	flag_bag->argument = 0;
}


void gather_flags(char *format, int *i, t_flags *flag_bag, va_list ap)
{
	*i += 1;
	flags(format, i, flag_bag);
	width(format, i, flag_bag, ap);
	precision(format, i, flag_bag, ap);
	arguments(format, i, flag_bag);
	type(format[*i], flag_bag);
}

void	print_argument(t_flags *flag_bag, va_list ap)
{
	if (flag_bag->type == '%')
		ft_putchar('%');
	
	if (flag_bag->type == 's')
		print_string(flag_bag, ap);
	
	if (flag_bag->type == 'c' || flag_bag->type == 'C')
		print_char(flag_bag, ap);
	
	if (flag_bag->type == 'd' || flag_bag->type == 'D' || flag_bag->type == 'i')
		print_int(flag_bag, ap);
	
	if (flag_bag->type == 'p')
		print_pointer(flag_bag, ap);
	
	if (flag_bag->type == 'f' || flag_bag->type == 'F')
		print_float(flag_bag, ap);
	
	if (flag_bag->type == 'o' || flag_bag->type == 'O' || flag_bag->type == 'u' ||
		flag_bag->type == 'U' || flag_bag->type == 'x' || flag_bag->type == 'X' ||
		flag_bag->type == 'b')
		print_unsigned_int(flag_bag, ap);
}

void solve(char *format, va_list ap)
{
	int i;
	int start;
	t_flags flag_bag;
	
	i = -1;
	start = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			print(start, i, format);
			bulid_bag(&flag_bag);
			gather_flags(format, &i, &flag_bag, ap);
			flag_bag.type == 0 ? i : i++;
			print_argument(&flag_bag, ap);
			start = i;
		}
	}
	print(start, i, format);
}


int ft_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	solve((char *)format, ap);
	va_end(ap);
	return (0);
}


