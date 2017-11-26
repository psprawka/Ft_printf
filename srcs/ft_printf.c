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

void	print(int start, int end, char *format)
{
	while (start < end)
		ft_putchar(format[start++]);
}

void	printf_width(t_flags *flag_bag, int len)
{
	int i;
	
	i = -1;
	if (flag_bag.precision < 0)
		flag_bag.width = flag_bag.precision * -1 + len;
	
	if (flag_bag.zero == true)
		while (++i < flag_bag.width - len)
			ft_putchar('0');
	else
		while (++i < flag_bag.width - len)
			ft_putchar(' ');
}

void	print_string(t_flags *flag_bag, va_list ap)
{
	char *str;
	int len;
	int i;
	
	str = va_arg(ap, char *);
	len = ((ft_strlen(str) < flag_bag.precision  && flag_bag.ifprec == true)
		   ? ft_strlen(str) : flag_bag.precision);
	if (flag_bag.minus == true)
		print_width(flag_bag, len);
	
	i = 0;
	while (str[i] != '\0' && i <= flag_bag.precision)
		ft_putchar(str[i++]);
	
	if (flag_bag.minus == false)
		print_width(flag_bag, len);
}

void	print_char(t_flags *flag_bag, va_list ap)
{
	char x;
	
	x = va_arg(ap, char);
	
	if (flag_bag.minus == true && flag_bag.precision > -1)
		print_width(flag_bag, 1);
	
	ft_putchar(x);
	
	if (flag_bag.minus == false || flag_bag.precision < 0)
		print_width(flag_bag, 1);
}

void	print_int(t_flags *flag_bag, va_list ap)
{
	int nb;
	
	nb = va_list(nb, int);
	
	if (nb > -1 && flag_bag.space == true)
		ft_putchar(' ');
	
	if (flag_bag.plus == true)
	{
		if (nb > 0)
			ft_putchar('+');
		else
		{
			ft_putchar('-');
			nb *= -1;
		}
	}
	
	(nb > 0  && flag_bag.plus == true) ? ft_putchar('+') || ft_putchar('-');
	
	
}

void	print_argument(t_flags *flag_bag, va_list ap)
{
	if (flag_bag.type == 's')
		print_string(flag_bag, va_list ap);
	
	if (flag_bag.type == 'c' || flag_bag.type == 'C')
		print_char(flag_bag, va_list ap);
	
	if (flag_bag.type == 'd' || flag_bag.type == 'D' || flag_bag.type == 'i')
		print_int(flag_bag, va_list ap);
	
	
	
}

void	bulid_bag(t_flags *flag_bag)
{
	flag_bag.minus = false;
	flag_bag.plus = false;
	flag_bag.space = false;
	flag_bag.hash = false;
	flag_bag.zero = false;
	flag_bag.ifprec = false;
	flag_bag.type = NULL;
	flag_bag.widht = 0;
	flag_bag.precision = 0;
	flag_bag.argument = 0;
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
		{
			flag_bag.minus = true;
			flag_bag.zero = false;
		}
		if (f[*i] == '#')
			flag_bag.hash = true;
		if (f[*i] == '0')
			if (flag_bag.minut == false);
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
	while (f[*i] != '\0' && (f[*i] == '-' || f[*i] == '*' || (f[*i] > 47 && f[*i] < 58)))
	{
		flag_bag.ifprec = true;
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
** flag_bag.argument may egual:
** - 1 if h appears;
** - 2 if hh appears;
** - 3 if l appears;
** - 4 if ll appears;
** - 5 if j appears;
** - 6 if z appears;
*/

void	arguments(char *f, int *i, t_flags *flag_bag, va_list ap)
{
	while (f[*i] != '\0' && (f[*i] == 'h' || f[*i] == 'l' || f[*i] == 'z' || f[*i] == 'j'))
	{
		if (f[*i] == 'h' && flag_bag.argument == 1)
			flag_bag.argument = 2;
		
		else if (f[*i] == 'h')
			flag_bag.argument = 1;
		
		else if (f[*i] == 'l' && flag_bag.argument == 3)
			flag_bag.argument = 4;
		
		else if (f[*i] == 'l')
			flag_bag.argument = 3;
		
		else if (f[*i] == 'j')
			flag_bag.argument = 5;
		
		else if (f[*i] == 'z')
			flag_bag.argument = 6;
		
		*i += 1;
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

void	type(char type, t_flags *flag_bag)
{
	if (type == 'd' || type == 's' || type == 'S' || type == 'p' || type == 'D' ||
		type == 'i' || type == 'o' || type == 'O' || type == 'u' || type == 'X' ||
		type == 'U' || type == 'x' || type == 'c' || type == 'C' || type == 'E' ||
		type == 'e' || type == 'f' || type == 'F')
		flag_bag.type = type;
	
	if ((type == 'S') || (type == 's' && flag_bag.argument = 'l'))
		exit(0);
}


void gather_flags(char *format, int *i, t_flags *flag_bag, va_list ap)
{
	flags(format, i, flag_bag);
	width(format, i, flag_bag, ap);
	precision(format, i, flag_bag, ap);
	arguments(format, i, flag_bag, ap);
	type(format[*i++], flag_bag));
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
			print_argument(&flag_bag, ap)
			start = i;
		}
	}
	print(start, i, format);
}


int ft_printf(const char *format, ...);
{
	va_list ap;
	
	va_start(ap, format);
	solve(format, ap);
	va_end(ap);
}

