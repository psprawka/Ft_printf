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

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define bool int
# define true 1
# define false 0
# define HEX_SMALL "0123456789abcdef"
# define HEX_LARGE "0123456789ABCDEF"


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

typedef struct		s_flags
{
	bool	minus;
	bool	zero;
	bool	space;
	bool	hash;
	bool	ifprec;
	char	type;
	bool	plus;
	int		width;
	int		precision;
	int		argument;
	int		ret;
}					t_flags;


/*
** libft functions:
*/

char	*ft_itoa(long long int n);
char	*ft_ftoa(double n);
char	*ft_strrev(char *str);

void	ft_putnbr(long int nb, t_flags *flag_bag);
void	ft_putchar(char c, t_flags *flag_bag);
void	ft_putstr(char const *s, t_flags *flag_bag);
void	*ft_memalloc(size_t size);

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_printf(const char *format, ...);

/*
** printf functions:
*/

void	print(int start, int end, char *format);

void	print_plus(t_flags *flag_bag, long int *nb, int *len);
void	print_hash(t_flags *flag_bag, int len);
void	print_int(t_flags *flag_bag, va_list ap);
void	print_char(t_flags *flag_bag, va_list ap);
void	print_float(t_flags *flag_bag, va_list ap);
void	print_string(t_flags *flag_bag, va_list ap);
void	print_pointer(t_flags *flag_bag, va_list ap);
void	print_unsigned_int(t_flags *flag_bag, va_list ap);

void	flags(char *f, int *i, t_flags *flag_bag);
void	width(char *f, int *i, t_flags *flag_bag, va_list ap);
void	precision(char *f, int *i, t_flags *flag_bag, va_list ap);
void	arguments(char *f, int *i, t_flags *flag_bag);
void	type(char type, t_flags *flag_bag);

char	*convert(t_flags *flag_bag, long int nb);
char	*convert_octal(unsigned int nb);
char	*convert_hex(unsigned int nb, char type);

void	print_width_int(t_flags *flag_bag, int len, long int *nb);
#endif
