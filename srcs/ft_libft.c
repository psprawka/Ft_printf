/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:44:55 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 11:44:58 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	ft_putchar(char c, t_flags *bag)
{
	write(1, &c, 1);
	bag->ret += 1;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*f;
	int		i;
	
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	if (!(f = (char *)malloc(ft_strlen((char *)s1)
							 + ft_strlen((char *)s2) + 1)))
		return (NULL);
	while (s1[i])
	{
		f[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		f[i] = *s2++;
		i++;
	}
	f[i] = '\0';
	return (f);
}

void	ft_putstr(char const *s, t_flags *bag)
{
	int	i;
	
	i = 0;
	while (s[i])
		ft_putchar(s[i++], bag);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	
	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*tab;
	int		i;
//
	i = 0;
	if (!(tab = (char *)malloc(size + 1)))
		return (NULL);
//	return (ft_memalloc(size + 1));
//	size++;
	while (i < size + 1)
		tab[i++] = '\0';
	return (tab);
}


void	*ft_memset(void *buffer, int c, size_t num)
{
	char	*tab;
	
	tab = (char *)buffer;
	while (num--)
		*tab++ = c;
	return (buffer);
}


void	*ft_memalloc(size_t size)
{
	void	*tab;
	
	if (!(tab = (void *)malloc(size)))
		return (NULL);
	ft_memset(tab, 0, size);
	return (tab);
}


char	*ft_strrev(char *str)
{
	char *rev;
	int i;
	int x;
	
	x = 0;
	i = 0;
	rev = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
		i++;
	i--;
	while (i > -1)
		rev[x++] = str[i--];
	
	rev[x] = '\0';
	return (rev);
}


void	ft_putnbr(long int nb, t_flags *bag)
{
	if (nb == -9223372036854775807 - 1)
	{
		ft_putstr("-9223372036854775808", bag);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', bag);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48, bag);
		return ;
	}
	ft_putnbr(nb / 10, bag);
	ft_putchar(nb % 10 + 48, bag);
	return ;
}
