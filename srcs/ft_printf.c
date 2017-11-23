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

#include "printf.h"

void bulid_bag(t_flags *flag_bag)
{
	flag_bag.minus = false;
	flag_bag.plus = false;
	flag_bag.space = false;
	flag_bag.hash = false;
	flag_bag.zero = false;
	flag_bag.type = NULL;
}



void find_arg(char *format, va_list ap)
{
	int i;
	t_flags flag_bag;
	
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			bulid_bag(&flag_bag);
			gather_flags(format, &i);
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

