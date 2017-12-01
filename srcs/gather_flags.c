/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gather_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:39:39 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 11:39:41 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	flags(char *f, int *i, t_flags *flag_bag)
{
	while (f[*i] != '\0' && (f[*i] == '+' || f[*i] == '-' ||
			f[*i] == '0' || f[*i] == ' ' || f[*i] == '#'))
	{
		if (f[*i] == '+')
		{
			flag_bag->plus = true;
			flag_bag->space = false;
		}
		if (f[*i] == '-')
		{
			flag_bag->minus = true;
			flag_bag->zero = false;
		}
		if (f[*i] == '#')
			flag_bag->hash = true;
		if (f[*i] == '0')
			if (flag_bag->minus == false)
				flag_bag->zero = true;
		if (f[*i] == ' ')
			if (flag_bag->plus == false)
				flag_bag->space = true;
		*i += 1;
	}
}

void	width(char *f, int *i, t_flags *flag_bag, va_list ap)
{
	char	*ptr;

	ptr = f;
	while (f[*i] != '\0' && (f[*i] == '*' || (f[*i] > 47 && f[*i] < 58)))
	{
		if (f[*i] == '*')
		{
			flag_bag->width = va_arg(ap, int);
			*i += 1;
		}
		else
		{
			ptr += *i;
			flag_bag->width = ft_atoi(ptr);
			while (f[*i] > 47 && f[*i] < 58)
				*i += 1;
		}
	}
//	flags(f, i, flag_bag);
}

void	precision(char *f, int *i, t_flags *flag_bag, va_list ap)
{
	char	*ptr;

	ptr = f;
//	flag_bag->ifprec = false;
	flag_bag->precision = 0;
	if (f[*i] != '.')
		return ;
	*i += 1;
	
	while (f[*i] != '\0' &&  (f[*i] == '-' || f[*i] == '*' || (f[*i] > 47 && f[*i] < 58)))
	{
		flag_bag->ifprec = true;
		if (f[*i] == '*')
		{
			flag_bag->precision = va_arg(ap, int);
			*i += 1;
		}
		else
		{
			ptr += *i;
			flag_bag->precision = ft_atoi(ptr);
			while ((f[*i] != '\0' && f[*i] > 47 && f[*i] < 58) || f[*i] == '-')
				*i += 1;
		}
	}
}

/*
 ** flag_bag->argument may egual:
 ** - 1 if h appears;
 ** - 2 if hh appears;
 ** - 3 if l appears;
 ** - 4 if ll appears;
 ** - 5 if j appears;
 ** - 6 if z appears;
 */

void	arguments(char *f, int *i, t_flags *flag_bag)
{
	while (f[*i] != '\0' && (f[*i] == 'h' || f[*i] == 'l' || f[*i] == 'z' || f[*i] == 'j'))
	{
		if (f[*i] == 'h' && flag_bag->argument == 1)
			flag_bag->argument = 2;
		else
			if (f[*i] == 'h')
				flag_bag->argument = 1;
		else
			if (f[*i] == 'l' && flag_bag->argument == 3)
				flag_bag->argument = 4;
		else
			if (f[*i] == 'l')
				flag_bag->argument = 3;
		else
			if (f[*i] == 'j')
				flag_bag->argument = 5;
		else
			if (f[*i] == 'z')
				flag_bag->argument = 6;
		*i += 1;
	}
}

void	type(char type, t_flags *flag_bag)
{

	
	if (type == 'd' || type == 's' || type == 'S' || type == 'p' || type == 'D' ||
		type == 'i' || type == 'o' || type == 'O' || type == 'u' || type == 'X' ||
		type == 'U' || type == 'x' || type == 'c' || type == 'C' || type == 'E' ||
		type == 'e' || type == 'f' || type == 'F' || type == '%' || type == 'b')
		flag_bag->type = type;
	if ((type == 'S') || (type == 's' && flag_bag->argument == 'l'))
		exit(0);
}
