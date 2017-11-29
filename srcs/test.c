/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:11:37 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/09 15:11:40 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/libftprintf.h"

int main()
{
//	short int fuckyou = 5;
//	int *b = 578;
	
//	printf("MINE: [%s]\n", convert_hex(429496, 'X'));
//	printf("NORM: [%X]\n", (unsigned int)429496);
	
	
//	printf("To jest %d test %+d\n", -588, 5);
//	printf("\"Books %% OR %% apparels\"\n");
//	printf ("%14*.*d\n", 18, 7, 20050);
//	printf ("normal:%d\nh: %hd\nhh: %hhhd\n", 2, x, '2');
//	printf("%d\n", 15);
//	printf("% c\n", 'J');
	
//	// p:
//	ft_printf("MINE:\nplus:				[%+p]\n", b);
//	ft_printf("width 10:			[%10p]\n", b);
//	ft_printf("minus and width 10:		[%-10p]\n", b);
//	ft_printf("space:				[% p]\n", b);
//	ft_printf("hash:				[%#p]\n", b);
//	ft_printf("precyzja 1:			[%.1p]\n", b);
//	ft_printf("width 10 prec 1:		[%10.1p]\n", b);
//	ft_printf("width 10 prec 6:		[%10.6p]\n", b);
//	ft_printf("hh:				[%hhp]\n", b);
//	ft_printf("h:				[%hp]\n", b);
//	ft_printf("ll:				[%llp]\n", b);
//	ft_printf("l:				[%lp]\n", b);
//	ft_printf("z:				[%zp]\n", b);
//	ft_printf("j:				[%jp]\n\n", b);
//	printf("STANDARD:\nplus:				[%+p]\n", b);
//	printf("width 10:			[%10p]\n", b);
//	printf("minus and width 10:		[%-10p]\n", b);
//	printf("space:				[% p]\n", b);
//	printf("hash:				[%#p]\n", b);
//	printf("precyzja 1:			[%.1p]\n", b);
//	printf("width 10 prec 1:		[%10.1p]\n", b);
//	printf("width 10 prec 6:		[%10.6p]\n", b);
//	printf("hh:				[%hhp]\n", b);
//	printf("h:				[%hp]\n", b);
//	printf("ll:				[%llp]\n", b);
//	printf("l:				[%lp]\n", b);
//	printf("z:				[%zp]\n", b);
//	printf("j:				[%jp]\n\n", b);
	
	
//	//string:
//	printf("plus:				[%+s]\n", "Hello");
//	printf("width 10:			[%10s]\n", "Hello");
//	printf("minus and width 10:		[%-10s]\n", "Hello");
//	printf("space:				[% s]\n", "Hello");
//	printf("hash:				[%#s]\n", "Hello");
//	printf("precyzja 1:			[%.1s]\n", "Hello");
//	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
//	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
//	printf("hh:				[%hhs]\n", "Hello");
//	printf("h:				[%hs]\n", "Hello");
//	printf("ll:				[%lls]\n", "Hello");
//	printf("l:				[%ls]\n", "Hello");
//	printf("z:				[%zs]\n", "Hello");
//	printf("j:				[%js]\n\n", "Hello");
//
//  //char:
//	printf("plus:				[%+c]\n", 12);
//	printf("width 10:			[%10c]\n", 'H');
//	printf("minus and width 10:		[%-10c]\n", 'H');
//	printf("space:				[% c]\n", 'H');
//	printf("hash:				[%#c]\n", 'H');
//	printf("precyzja 1:			[%.1c]\n", 'H');
//	printf("width 10 prec 1:		[%10.1c]\n", 'H');
//	printf("width 10 prec 6:		[%10.6c]\n", 'H');
//	printf("hh:				[%hhc]\n", 'H');
//	printf("h:				[%hc]\n", 'H');
//	printf("ll:				[%llc]\n", 'H');
//	printf("l:				[%lc]\n", 'H');
//	printf("z:				[%zc]\n", 'H');
//	printf("j:				[%jc]\n", 'H');
	
//	// d, i, D:
//	printf("plus:				[%+i]\n", 12);
//	printf("zero:				[%0i]\n", 12);
//	printf("width 10:			[%10i]\n", 12);
//	printf("minus and width 10:		[%-10i]\n", 12);
//	printf("space:				[% i]\n", 12);
//	printf("hash:				[%#i]\n", 12);
//	printf("precyzja 1:			[%.1i]\n", 12);
//	printf("width 10 prec 1:		[%10.1i]\n", 12);
//	printf("width 10 prec 6:		[%10.6i]\n", 12);
//	printf("- width 10 prec 6:		[%-10.6i]\n", 12);
//	printf("hh:				[%hhi]\n", 12);
//	printf("h:				[%hi]\n", 12);
//	printf("ll:				[%lli]\n", 12);
//	printf("l:				[%li]\n", 12);
//	printf("z:				[%zi]\n", 12);
//	printf("j:				[%ji]\n\n", 12);
//
//  // f, F:
//	printf("normal:				[%F]\n", 12.12);
//	printf("plus:				[%+f]\n", 12.12);
//	printf("zero:				[%0f]\n", 12.12);
//	printf("width 10:			[%10f]\n", 12.12);
//	printf("minus and width 10:		[%-10f]\n", 12.12);
//	printf("space:				[% f]\n", 12.12);
//	printf("hash:				[%#f]\n", 12.12);
//	printf("precyzja 1:			[%.1f]\n", 12.12);
//	printf("width 10 prec 1:		[%10.1f]\n", 12.12);
//	printf("width 10 prec 6:		[%10.6f]\n", 12.12);
//	printf("hh:				[%hhf]\n", 12.12);
//	printf("h:				[%hf]\n", 12.12);
//	printf("ll:				[%llf]\n", 12.12);
//	printf("l:				[%lf]\n", 12.12);
//	printf("z:				[%zf]\n", 12.12);
//	printf("j:				[%jf]\n", 12.12);
	
//	// X, x:
//	printf("normal:				[%x]\n", 1244);
//	printf("plus:				[%+x]\n", 1244);
//	printf("zero:				[%0x]\n", 1244);
//	printf("width 10:			[%10x]\n", 1244);
//	printf("minus and width 10:		[%-10x]\n", 1244);
//	printf("space:				[% x]\n", 1244);
//	printf("hash:				[%#x]\n", 1244);
//	printf("precyzja 1:			[%.1x]\n", 1244);
//	printf("width 10 prec -1:		[%010.-1x]\n", 1244);
//	printf("width 10 prec 1:		[%010.1x]\n", 1244);
//	printf("width 10 prec 6:		[%010.6x]\n", 1244);
//	printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
//	printf("width 10 prec -6:		[%.-6x]\n", 1244);
//	printf("hh:				[%hhx]\n", 1244);
//	printf("h:				[%hx]\n", 1244);
//	printf("ll:				[%llx]\n", 1244);
//	printf("l:				[%lx]\n", 1244);
//	printf("z:				[%zx]\n", 1244);
//	printf("j:				[%jx]\n", 1244);
	
//	 //F, f:
//	printf("THEIR:\nnormal:				[%f]\n", 12.44);
//	printf("plus:				[%+f]\n", 12.44);
//	printf("zero:				[%0f]\n", 12.44);
//	printf("width 10:			[%10f]\n", 12.44);
//	printf("minus and width 10:		[%-10f]\n", 12.44);
//	printf("space:				[% f]\n", 12.44);
//	printf("hash:				[%#f]\n", 12.44);
//	printf("precyzja 1:			[%.1f]\n", 12.44);
////	printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
//	printf("width 10 prec 1:		[%010.1f]\n", 12.44);
//	printf("width 10 prec 6:		[%010.6f]\n", 12.44);
//	printf("# width 10 prec 6:		[%#010.6f]\n", 12.44);
////	printf("width 10 prec -6:		[%.-6f]\n", 12.44);
////	printf("hh:				[%hhf]\n", 12.44);
////	printf("h:				[%hf]\n", 12.44);
////	printf("ll:				[%llf]\n", 12.44);
//	printf("l:				[%lf]\n", 12.44);
////	printf("z:				[%zf]\n", 12.44);
////	printf("j:				[%jf]\n", 12.44);
//	
//	ft_printf("MINE:\nnormal:				[%f]\n", 12.44);
//	ft_printf("plus:				[%+f]\n", 12.44);
//	ft_printf("zero:				[%0f]\n", 12.44);
//	ft_printf("width 10:			[%10f]\n", 12.44);
//	ft_printf("minus and width 10:		[%-10f]\n", 12.44);
//	ft_printf("space:				[% f]\n", 12.44);
//	ft_printf("hash:				[%#f]\n", 12.44);
//	ft_printf("precyzja 1:			[%.1f]\n", 12.44);
////	printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
//	ft_printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
//	ft_printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
//	ft_printf("# width 10 prec 6:		[%#010.6f]\n", 12.44);
////	printf("width 10 prec -6:		[%.-6f]\n", 12.44);
////	printf("hh:				[%hhf]\n", 12.44);
////	printf("h:				[%hf]\n", 12.44);
////	ft_printf("ll:				[%llf]\n", 12.44);
//	ft_printf("l:				[%lf]\n", 12.44);
////	ft_printf("z:				[%zf]\n", 12.44);
////	ft_printf("j:				[%jf]\n", 12.44);
	
	
//	// rest:
	printf("PRINTF: [%f] haha\n", -11.0);
	ft_printf("FT_PRINTF: [%f] haha\n", -11.0);
//	printf("PRINTF: [%.-7O] haha\n", 110);
//	ft_printf("FT_PRINTF: [%+.-7O] haha new arg: [%s]\n", 110, "I'm working!");
//	printf("PRINTF: [%-3.1d] haha\n", 0);
//	ft_printf("FT_PRINTF: [%-3.1d] haha\n", 0);
//	printf("PRINTF: [%01.0c] haha\n", 'H');
//	ft_printf("FT_PRINTF: [%01.0c] haha\n", 'H');
//	printf("PRINTF: [%.0s] haha\n", "Jestem Pola");
//	ft_printf("FT_PRINTF: [%.0s] haha\n", "Jestem Pola");
//	
//	printf ("%*d\n", 20, 5);
//	printf ("precyzja d, i o, u, x, X - 1, 200: %.1d\nprecyzja f, e, E - 1, 5.777: %.1f\nprecyzja g, G - 7, 25.625 && 2, 25.625: %.7g && %.2g\n", 200, 5.777, 25.625, 25.625);
//	//	ft_printf("To jest test %d\n", 5);
//	printf("%d\n", atoi("123c"));
	return (0);
}

