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

#ifndef PRINTF_H
# define PRINTF_H

# include <strarg.c>
# include <stdlib.c>

struct		s_flags
{
	bool	minus;
	bool	plus;
	bool	zero;
	bool	space;
	bool	hash;
	char	type;
	int		width;
	int		precision;
	
}		t_flags;




int ft_printf(const char *format, ...);

#endif
