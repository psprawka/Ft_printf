/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indirect_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:43:30 by psprawka          #+#    #+#             */
/*   Updated: 2017/12/13 18:43:33 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

/*
** ------------------------- LIBFTPRINTF FUNCTIONS -----------------------------
*/

void	ft_putchar(char c, t_flags *bag)
{
	write(1, &c, 1);
	bag->ret += 1;
}

void	ft_putstr(char const *s, t_flags *bag)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++], bag);
}

int		ft_wstrlen(wchar_t *ws)
{
	int	len;

	len = 0;
	while (ws[len])
	{
//		if (ws[len] > 0xFF)
//			return (-1);
		len++;
	}
	return (len);
}

/*
** -------------------------- INDIRECT FUNCTIONS -------------------------------
*/

int		colors(char *s, t_flags *bag)
{
	if (ft_strcmp(s, YELLOW) == 0 || ft_strcmp(s, BLACK) == 0 ||
		ft_strcmp(s, WHITE) == 0 || ft_strcmp(s, NORMAL) == 0 ||
		ft_strcmp(s, GREEN) == 0 || ft_strcmp(s, CYAN) == 0 ||
		ft_strcmp(s, MAGNETA) == 0 || ft_strcmp(s, RED) == 0 ||
		ft_strcmp(s, BLUE) == 0)
	{
		ft_putstr(s, bag);
		return (1);
	}
	return (0);
}

char	*convert(t_flags *bag, long long int nb)
{
	if (TYPE == 'b')
		return (convert_binary(nb));
	if (TYPE == 'o' || TYPE == 'O')
		return (convert_octal(nb));
	if (TYPE == 'x' || TYPE == 'X' || TYPE == 'p')
		return (convert_hex(nb, TYPE));
	if (TYPE == 'u' || TYPE == 'U')
		return (ft_itoa(nb));
	return (NULL);
}
