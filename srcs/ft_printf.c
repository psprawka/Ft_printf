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

#include "libftprintf.h"

void bulid_bag(t_flags *flag_bag)
{
	flag_bag.minus = false;
	flag_bag.plus = false;
	flag_bag.space = false;
	flag_bag.hash = false;
	flag_bag.zero = false;
	flag_bag.type = NULL;
}


int	check_type(char type, t_flags *flag_bag)
{
	if (type == 'd' || type == 's' || type == 'S' || type == 'p' || type == 'D' ||
		type == 'i' || type == 'o' || type == 'O' || type == 'u' || type == 'X' ||
		type == 'U' || type == 'x' || type == 'c' || type == 'C')
	{
		flag_bag.type = type;
		return (1);
	}
	return (0);
}

void	flags(char *f, int *i, t_flags *flag_bag)
{
	while (f[*i] != '\0' && (f[*i] == '+' || f[*i] == '-' || f[*i] == '0' ||
							 f[*i] == ' ' || f[*i] == '#'))
	{
		if (f[*i] == '+')
		{
			flag_bag.plus = true;
			flag_bag.space = false;
		}
		if (f[*i] == '-')
			flag_bag.minus = true;
		if (f[*i] == '#')
			flag_bag.hash = true;
		if (f[*i] == '0')
			flag_bag.zero = true;
		if (f[*i] == ' ')
			if (flag_bag.plus == false)
				flag_bag.space = true;
		*i += 1;
	}
}

void	width(char *f, int *i, t_flags *flag_bag, va_list ap)
{
	char *ptr;
	
	ptr = f;
	while (f[*i] != '\0' && (f[*i] == '*' || (f[*i] > 47 && f[*i] < 58)))
	{
		if (f[*i] == '*')
		{
			flag_bag.width = va_arg(ap, int);
			*i += 1
		}
		else
		{
			ptr += *i;
			flag_bag.width = ft_atoi(ptr);
			while (f[*i] > 47 && f[*i] < 58)
				*i += 1;
		}
	}
}


void	precision(char *f, int *i, t_flags *flag_bag, va_list ap)
{
	char *ptr;
	
	ptr = f;
	
	if (f[*i] != '.')
		return ;
	
	*i += 1;
	while (f[*i] != '\0' && (f[*i] == '*' || (f[*i] > 47 && f[*i] < 58)))
	{
		if (f[*i] == '*')
		{
			flag_bag.precision = va_arg(ap, int);
			*i += 1
		}
		else
		{
			ptr += *i;
			flag_bag.precision = ft_atoi(ptr);
			while (f[*i] > 47 && f[*i] < 58)
				*i += 1;
		}
	}
}


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

void gather_flags(char *format, int *i, t_flags *flag_bag, va_list ap)
{
	while ((format[++*i] != '\0') && (check_type(format[*i], flag_bag)) == 0)
	{
		flags(format, i, flag_bag);
		width(format, i, flag_bag, ap);
		precision(format, i, flag_bag, ap);
		
		
	}
	
	
}

void print(int start, int end, char *format)
{
	while (start < end)
		ft_putchar(format[start++]);
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
		}
	}
}


int ft_printf(const char *format, ...);
{
	va_list ap;
	
	va_start(ap, format);
	solve(format, ap);
	va_end(ap);
}

