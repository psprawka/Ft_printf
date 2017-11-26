/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:39:57 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/09 16:40:01 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <strarg.c>
# include <stdlib.c>

/*
** width may equal -1 when * appears;
** precision may egual -1 when * appears;
**
** argument is the very last flag and may egual:
**		1 if h appears;
**		2 if hh appears;
**		3 if l appears;
**		4 if ll appears;
**		5 if j appears;
**		6 if z appears;
*/

struct		s_flags
{
	bool	minus;
	bool	plus;
	bool	zero;
	bool	space;
	bool	hash;
	bool	ifprec;
	char	type;
	int		width;
	int		precision;
	int		argument;
	
}		t_flags;


int ft_printf(const char *format, ...);

#endif
