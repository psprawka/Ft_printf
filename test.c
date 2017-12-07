//* ************************************************************************** */
//*                                                                            */
//*                                                        :::      ::::::::   */
//*   test.c                                             :+:      :+:    :+:   */
//*                                                    +:+ +:+         +:+     */
//*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
//*                                                +#+#+#+#+#+   +#+           */
//*   Created: 2017/11/09 15:11:37 by psprawka          #+#    #+#             */
//*   Updated: 2017/11/09 15:11:40 by psprawka         ###   ########.fr       */
//*                                                                            */
//* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libftprintf.h"

int main()
{
	int *b = 47;
	
	printf("[their:	%%   %   %]\n", "test");
	ft_printf("[mine:	%%   %   %]\n", "test");
	printf("[their:	%%%]\n", "test");
	ft_printf("[mine:	%%%]\n", "test");
	
/* ------------------------ p ---------------------------- */
//	ft_printf("m: plus:				[%+p]\n", b);
//	printf("t: plus:				[%+p]\n", b);
//	ft_printf("width 10:				[%10p]\n", b);
//	printf("width 10:				[%10p]\n", b);
//	ft_printf("minus and width 10:			[%-10p]\n", b);
//	printf("minus and width 10:			[%-10p]\n", b);
//	ft_printf("space:					[% p]\n", b);
//	printf("space:					[% p]\n", b);
//	ft_printf("hash:					[%#p]\n", b);
//	printf("hash:					[%#p]\n", b);
//	ft_printf("precyzja 1:				[%.1p]\n", b);
//	printf("precyzja 1:				[%.1p]\n", b);
//	ft_printf("width 10 prec 1:			[%10.1p]\n", b);
//	printf("width 10 prec 1:			[%10.1p]\n", b);
//	ft_printf("width 10 prec -1:			[%10.-1p]\n", b);
//	printf("width 10 prec -1:			[%10.-1p]\n", b);
//	ft_printf("#0 width 12 prec 5:			[%#012.5p]\n", b);
//	printf("#0 width 1 prec 5:			[%#012.5p]\n", b);
//	ft_printf("width 10 prec -11:			[%10.-11p]\n", b);
//	printf("width 10 prec -11:			[%10.-11p]\n", b);
//	ft_printf("width 8 prec 13:			[%8.13p]\n", b);
//	printf("width 8 prec 13:			[%8.13p]\n", b);
//	ft_printf("0 width 10:				[%010p]\n", b);
//	printf("0 width 10:				[%010p]\n", b);
//	ft_printf("0 width 10 prec 5:			[%010.5p]\n", b);
//	printf("0 width 10 prec 5:			[%010.5p]\n", b);
//	ft_printf("0 width 10 prec 1:			[%010.1p]\n", b);
//	printf("0 width 10 prec 1:			[%010.1p]\n", b);
//	ft_printf("width 10 prec 6:			[%10.6p]\n", b);
//	printf("width 10 prec 6:			[%10.6p]\n", b);
//	ft_printf("- width 15 prec 3:			[%-15.3p]\n", b);
//	printf("- width 15 prec 3:			[%-15.3p]\n", b);
//	ft_printf("#+ width 10 prec 10:			[%#+10.10p]\n", b);
//	printf("#+ width 10 prec 10:			[%#+10.10p]\n", b);
//	ft_printf("hh:					[%hhp]\n", b);
//	printf("hh:					[%hhp]\n", b);
//	ft_printf("h:					[%hp]\n", b);
//	printf("h:					[%hp]\n", b);
//	ft_printf("ll:					[%llp]\n", b);
//	printf("ll:					[%llp]\n", b);
//	ft_printf("l:					[%lp]\n", b);
//	printf("l:					[%lp]\n", b);
//	ft_printf("z:					[%zp]\n", b);
//	printf("z:					[%zp]\n", b);
//	ft_printf("j:					[%jp]\n", b);
//	printf("j:					[%jp]\n", b);
//	ft_printf("normal:					[%p]\n", 0);
//	printf("normal:					[%p]\n", 0);

	
/* ------------------------ s -------------------------- */
	printf("plus:				[%+s]\n", "Hello");
	ft_printf("plus:				[%+s]\n", "Hello");
	printf("width 10:			[%10s]\n", "Hello");
	ft_printf("width 10:			[%10s]\n", "Hello");
	printf("0 width 10:			[%010s]\n", "Hello");
	ft_printf("0 width 10:			[%010s]\n", "Hello");
	printf("-0 width 10:			[%-010s]\n", "Hello");
	ft_printf("-0 width 10:			[%-010s]\n", "Hello");
	printf("minus and width 10:		[%-10s]\n", "Hello");
	ft_printf("minus and width 10:		[%-10s]\n", "Hello");
	printf("space:				[% s]\n", "Hello");
	ft_printf("space:				[% s]\n", "Hello");
	printf("hash:				[%#s]\n", "Hello");
	ft_printf("hash:				[%#s]\n", "Hello");
	printf("precyzja 1:			[%.1s]\n", "Hello");
	ft_printf("precyzja 1:			[%.1s]\n", "Hello");
	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	ft_printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	printf("width 10 prec -3:		[%10.-3s]\n", "Hello");
	ft_printf("width 10 prec -3:		[%10.-3s]\n", "Hello");
	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	ft_printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	printf("hh:				[%hhs]\n", "Hello");
	ft_printf("hh:				[%hhs]\n", "Hello");
	printf("h:				[%hs]\n", "Hello");
	ft_printf("h:				[%hs]\n", "Hello");
	printf("ll:				[%lls]\n", "Hello");
	ft_printf("ll:				[%lls]\n", "Hello");
	printf("l:				[%ls]\n", "Hello");
	ft_printf("l:				[%ls]\n", "Hello");
	printf("z:				[%zs]\n", "Hello");
	ft_printf("z:				[%zs]\n", "Hello");
	printf("j:				[%js]\n", "Hello");
	ft_printf("j:				[%js]\n", "Hello");
	printf("empty:				[%s]\n", "");
	ft_printf("empty:				[%s]\n", "");
	printf("null:				[%s]\n", NULL);
	ft_printf("null:				[%s]\n", NULL);


/* --------------------- c, C -------------------------- */
	printf("plus:				[%+c]\n", 113);
	ft_printf("plus:				[%+c]\n", 113);
	printf("width 10:			[%10c]\n", 'H');
	ft_printf("width 10:			[%10c]\n", 'H');
	printf("minus and width 10:		[%-10c]\n", 'H');
	ft_printf("minus and width 10:		[%-10c]\n", 'H');
	printf("hash:				[%#c]\n", 'H');
	ft_printf("hash:				[%#c]\n", 'H');
	printf("prec 1:				[%.1c]\n", 'H');
	ft_printf("prec 1:				[%.1c]\n", 'H');
	printf("prec 0:				[%.0c]\n", 'H');
	ft_printf("prec 0:				[%.0c]\n", 'H');
	printf("prec -1:			[%.-1c]\n", 'H');
	ft_printf("prec -1:			[%.-1c]\n", 'H');
	printf("width 10 prec 1:		[%10.1c]\n", 'H');
	ft_printf("width 10 prec 1:		[%10.1c]\n", 'H');
	printf("width 10 prec 6:		[%10.6c]\n", 'H');
	ft_printf("width 10 prec 6:		[%10.6c]\n", 'H');
	printf("hh:				[%hhc]\n", 'H');
	ft_printf("hh:				[%hhc]\n", 'H');
	printf("h:				[%hc]\n", 'H');
	ft_printf("h:				[%hc]\n", 'H');
	printf("ll:				[%llc]\n", 'H');
	ft_printf("ll:				[%llc]\n", 'H');
	printf("l:				[%lc]\n", 'H');
	ft_printf("l:				[%lc]\n", 'H');
	printf("z:				[%zc]\n", 'H');
	ft_printf("z:				[%zc]\n", 'H');
	printf("j:				[%jc]\n", 'H');
	ft_printf("j:				[%jc]\n", 'H');

	
/* --------------------- d, D -------------------------- */
//	printf("t:plus:				[%d]\n", 2999999999);
//	ft_printf("m:plus:				[%d]\n", 2999999999);
//	printf("10.6:				[% 10.6d]\n", 12);
//	ft_printf("10.6:				[% 10.6d]\n", 12);
//	printf("0 10.6:				[%0 10.6d]\n", 12);
//	ft_printf("0 10.6:				[%0 10.6d]\n", 12);
//	printf("-+10.5:				[%-+10.5d]\n", -12);
//	ft_printf("-+10.5:				[%-+10.5d]\n", -12);
//	printf("zero:				[%0i]\n", 12);
//	ft_printf("zero:				[%0i]\n", 12);
//	printf("width 10:			[%10i]\n", 12);
//	ft_printf("width 10:			[%10i]\n", 12);
//	printf("minus and width 10:		[%-10i]\n", 12);
//	ft_printf("minus and width 10:		[%-10i]\n", 12);
//	printf("minus and width 10:		[%-10i]\n", 12);
//	ft_printf("hash:				[%#i]\n", 12);
//	printf("hash:				[%#i]\n", 12);
//	ft_printf("precyzja 1:			[%.1i]\n", 12);
//	printf("precyzja 1:			[%.1i]\n", 12);
//	ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
//	printf("width 10 prec 1:		[%10.1i]\n", 12);
//	ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
//	printf("width 10 prec 6:		[%10.6i]\n", 12);
//	ft_printf("- width 10 prec 6:		[%-10.6i]\n", 12);
//	printf("- width 10 prec 6:		[%-10.6i]\n", 12);
//	ft_printf("0 width 4 prec 3:		[%04.3d]\n", -1);
//	printf("0 width 4 prec 3:		[%04.3d]\n", -1);
//	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
//	printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
//	ft_printf("width 10 prec 5:		[%+10.5d]\n", -25);
//	printf("width 10 prec 5:		[%+10.5d]\n", -25);
//	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
//	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
//	ft_printf("prec 10:			[%.10d]\n", -12);
//	printf("prec 10:			[%.10d]\n", -12);
//	ft_printf("width 5 prec .:			[%5.d]\n", 0);
//	printf("width 5 prec .:			[%5.d]\n", 0);
//	ft_printf("width 5 prec 0:			[%5.0d]\n", 0);
//	printf("width 5 prec 0:			[%5.0d]\n", 0);
//	ft_printf("width 4 prec.:			[%4.d]\n", 0);
//	printf("width 4 prec.:			[%4.d]\n", 0);
//	ft_printf("m: 0 width 10:			[%010d]\n", 0);
//	printf("t: 0 width 10:			[%010d]\n", 0);
//	ft_printf("0 width 5:			[%05d]\n", -42);
//	printf("0 width 5:			[%05d]\n", -42);
//	ft_printf("- width 5:			[%-5d]\n", -42);
//	printf("- width 5:			[%-5d]\n", -42);
//	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
//	printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
//	ft_printf("0 width 3 prec 2:		[%03.2d]\n", 0);
//	printf("0 width 3 prec 2:		[%03.2d]\n", 0);
//	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
//	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
//	ft_printf("space:				[% d]\n", 42);
//	printf("space:				[% d]\n", 42);
//	ft_printf("plus:				[%+d]\n", 0);
//	printf("plus:				[%+d]\n", 0);
//	ft_printf("width 10:			[%10d]\n", 0);
//	printf("width 10:			[%10d]\n", 0);
//	ft_printf("prec 5:				[%.5d]\n", 0);
//	printf("prec 5:				[%.5d]\n", 0);
//	ft_printf("' ' width 5:			[% 5d]\n", 4);
//	printf("' ' width 5:			[% 5d]\n", 4);
//	ft_printf("' ' prec 5:			[%.5d]\n", 4);
//	printf("' ' prec 5:			[%.5d]\n", 4);
//	ft_printf("' ' prec 5:			[%.5d]\n", 0);
//	printf("' ' prec 5:			[%.5d]\n", 0);
//	ft_printf("0+ width 5:			[%0+5d]\n", -1);
//	printf("0+ width 5:			[%0+5d]\n", -1);
//	ft_printf("prec 0:			[%.0d]\n", -1);
//	printf("prec 0:			[%.0d]\n", -1);
//	ft_printf("++ width 10:		[%++10d]\n", -42);
//	printf("++ width 10:	[%++10d]\n", -42);
//	ft_printf("width 10:	[%10d]\n", -42);
//	printf("width 10:	[%10d]\n", -42);
//	ft_printf("+0 width 10:		[%+010d]\n", +42);
//	printf(("+0 width 10:	[%+010d]\n", +42);
//	ft_printf("+0 width 4:		[%+04d]\n", 42);
//	printf("+0 width 4:		[%+04d]\n", 42);
	

/* ---------------------- o, O -------------------------- */
//	ft_printf("- width 10 prec 5:		[%-10.5o]\n", 25);
//	printf("- width 10 prec 5:		[%-10.5o]\n", 25);
//	ft_printf("- width 5 prec 10:		[%-5.10o]\n", 25);
//	printf("- width 5 prec 10:		[%-5.10o]\n", 25);
//	ft_printf("hh:				[%hho]\n", 1234);
//	printf("hh:				[%hho]\n", 1234);
//	ft_printf("o:				[%o]\n", 0);
//	printf("o:				[%o]\n", 0);
//	ft_printf("# prec .:			[%#.o]\n", 0);
//	printf("# prec .:			[%#.o]\n", 0);
//	ft_printf("# prec 0:			[%#.0o]\n", 0);
//	printf("# prec 0:			[%#.0o]\n", 0);
//	ft_printf("prec .:				[%.o]\n", 0);
//	printf("prec .:				[%.o]\n", 0);
//	ft_printf("prec 0:				[%.0o]\n", 0);
//	printf("prec 0:				[%.0o]\n", 0);
	
	
	
/* ---------------------- u, U -------------------------- */
//	ft_printf("u:				[%u]\n", -1);
//	printf("u:				[%u]\n", -1);
//	ft_printf("hU:				[%hU]\n", 4294967296);
//	printf("hU:				[%hU]\n", 4294967296);
//	ft_printf("zu:				[%zu]\n", 18446744073709551614);
//	printf("zu:				[%zu]\n", 18446744073709551614);
//	ft_printf("zu:				[%zu]\n", 18446744073709551615);
//	printf("zu:				[%zu]\n", 18446744073709551615);
//	ft_printf("zu:				[%zu]\n", 18446744073709551620);
//	printf("zu:				[%zu]\n", 18446744073709551620);
//	ft_printf("u:				[%u]\n", 0);
//	printf("u:				[%u]\n", 0);
//	ft_printf("u:				[%u]\n", 4294967296);
//	printf("u:				[%u]\n", 4294967296);
//	ft_printf("lu:				[%lu]\n", -42);
//	printf("lu:				[%lu]\n", -42);
//	ft_printf("lu:				[%lu]\n", -42);
//	printf("lu:				[%lu]\n", -42);
//	ft_printf("zu:				[%zu]\n", -125);
//	printf("zu:				[%zu]\n", -125);
//	ft_printf("zu:				[%zu]\n", 18446744073709551491);
//	printf("zu:				[%zu]\n", 18446744073709551491);

	
/* ------------------------ i -------------------------- */
//	ft_printf("h:				[%hi]\n", 121232312213132312);
//	printf("h:				[%hi]\n", 121232312213132312);
//	ft_printf("ll:				[%lli]\n", 121232312213132312);
//	printf("ll:				[%lli]\n", 121232312213132312);
//	ft_printf("l:				[%li]\n", 121232312213132312);
//	printf("l:				[%li]\n", 121232312213132312);
//	ft_printf("z:				[%zi]\n", 121232312213132312);
//	printf("z:				[%zi]\n", 121232312213132312);
//	ft_printf("j:				[%ji]\n", 121232312213132312);
//	printf("j:				[%ji]\n", 121232312213132312);
	
	
/* ---------------------- F, f -------------------------- */
//	printf("t: normal:				% \n");
//	ft_printf("m: normal:			% ");
//	printf("plus:				[%+f]\n", 12.12);
//	ft_printf("plus:				[%+f]\n", 12.12);
//	printf("prec 1:				[%.1f]\n", 12.12);
//	ft_printf("prec 1:				[%.1f]\n", 12.12);
//	printf("zero:				[%0f]\n", 12.12);
//	ft_printf("zero:				[%0f]\n", 12.12);
//	printf("width 10:			[%10f]\n", 12.12);
//	ft_printf("width 10:			[%10f]\n", 12.12);
//	printf("space:				[% f]\n", 12.12);
//	ft_printf("space:				[% f]\n", 12.12);
//	printf("minus and width 10:		[%-10f]\n", 12.12);
//	ft_printf("minus and width 10:		[%-10f]\n", 12.12);
//	printf("hash:				[%#f]\n", 12.12);
//	ft_printf("hash:				[%#f]\n", 12.12);
//	printf("width 10 prec 1:		[%10.1f]\n", 12.12);
//	ft_printf("width 10 prec 1:		[%10.1f]\n", 12.12);
//	printf("+ width 10 prec 1:		[%+10.1f]\n", 12.12);
//	ft_printf("+ width 10 prec 1:		[%+10.1f]\n", 12.12);
//	printf("width 10 prec 1:		[%+10.1f]\n", -12.12);
//	ft_printf("width 10 prec 1:		[%+10.1f]\n", -12.12);
//	printf("width 10 prec 6:		[%10.6f]\n", 12.12);
//	ft_printf("width 10 prec 6:		[%10.6f]\n", 12.12);
//	printf("width 10 prec .:		[%10.f]\n", 12.12);
//	ft_printf("width 10 prec .:		[%10.f]\n", 12.12);
//	printf("width 10 prec .0:		[%10.0f]\n", 12.12);
//	ft_printf("width 10 prec .0:		[%10.0f]\n", 12.12);
//	printf("hh:				[%hhf]\n", 12.12);
//	ft_printf("hh:				[%hhf]\n", 12.12);
//	printf("h:				[%hf]\n", 12.12);
//	ft_printf("h:				[%hf]\n", 12.12);
//	printf("ll:				[%llf]\n", 12.12);
//	ft_printf("ll:				[%llf]\n", 12.12);
//	printf("l:				[%lf]\n", 12.12);
//	ft_printf("l:				[%lf]\n", 12.12);
//	printf("z:				[%zf]\n", 12.12);
//	ft_printf("z:				[%zf]\n", 12.12);
//	printf("j:				[%jf]\n", 12.12);
//	ft_printf("j:				[%jf]\n", 12.12);
//	printf("%s GREEN STARTS HERE\nwidth 10 prec -1:		[%010.-1f]\n", GREEN, 12.44);
//	ft_printf("width 10 prec -1:		[%010.-1f]\n", 12.44);
//	printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
//	ft_printf("0 width 10 prec 1:		[%010.1f]\n", 12.44);
//	printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
//	ft_printf("0 width 10 prec 6:		[%010.6f]\n", 12.44);
//	printf("#0 width 10 prec 6:		[%#010.6f]\n", 12.44);
//	ft_printf("#0 width 10 prec 6:		[%#010.6f]\n", 12.44);
//	printf("width 10 prec -6:		[%10.-6f]\n", 12.44);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 12.44);
//	printf("number 0:			[%f]\n", 0.0);
//	ft_printf("%sBACK TO NORMAL COLOR\nnumber 0:			[%f]\n", NORMAL, 0.0);
//	printf("width 10 prec 2:		[%10.2f]\n", 1.99);
//	ft_printf("width 10 prec 2:		[%10.2f]\n", 1.99);
//	printf("width 10 prec 6:		[%10.6f]\n", 1.9999);
//	ft_printf("width 10 prec 6:		[%10.6f]\n", 1.9999);
//	printf("normal:				[%f]\n", 1.99);
//	ft_printf("normal:				[%f]\n", 1.99);
//	printf("width 10 prec 0:		[%10.0f]\n", 1.99);
//	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.99);
//	printf("width 10 prec -6:		[%10.-6f]\n", 1.9999);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.9999);
//	printf("width 10 prec 0:		[%10.0f]\n", 1.9);
//	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.9);
//	printf("width 10 prec -6:		[%10.-6f]\n", 1.91);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.91);
//	printf("width 10 prec 0:		[%10.0f]\n", 1.8);
//	ft_printf("width 10 prec 0:		[%10.0f]\n", 1.8);
//	printf("width 10 prec -6:		[%10.-6f]\n", 1.6);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.6);
//	printf("width 10 prec -6:		[%10.-6f]\n", 1.5);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.5);
//	printf("width 10 prec -6:		[%10.-6f]\n", 1.49);
//	ft_printf("width 10 prec -6:		[%10.-6f]\n", 1.4);

	
	
/* ---------------------- X, x -------------------------- */
//	printf("t: normal:			[%x]\n", 1244);
//	ft_printf("m: normal:			[%x]\n", 1244);
//	printf("plus:				[%+x]\n", 1244);
//	ft_printf("plus:				[%+x]\n", 1244);
//	printf("zero:				[%0x]\n", 1244);
//	ft_printf("zero:				[%0x]\n", 1244);
//	printf("width 10:			[%10x]\n", 1244);
//	ft_printf("width 10:			[%10x]\n", 1244);
//	printf("minus and width 10:		[%-10x]\n", 1244);
//	ft_printf("minus and width 10:		[%-10x]\n", 1244);
//	printf("space:				[% x]\n", 1244);
//	ft_printf("space:				[% x]\n", 1244);
//	printf("hash:				[%#x]\n", 1244);
//	ft_printf("hash:				[%#x]\n", 1244);
//	printf("precyzja 1:			[%.1x]\n", 1244);
//	ft_printf("precyzja 1:			[%.1x]\n", 1244);
//	printf("width 10 prec -1:		[%010.-1x]\n", 1244);
//	ft_printf("width 10 prec -1:		[%010.-1x]\n", 1244);
//	printf("width 10 prec 6:		[%010.6x]\n", 1244);
//	ft_printf("width 10 prec 6:		[%010.6x]\n", 1244);
//	printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
//	ft_printf("# width 10 prec 6:		[%#010.6x]\n", 1244);
//	printf("width 10 prec -6:		[%.-6x]\n", 1244);
//	ft_printf("width 10 prec -6:		[%.-6x]\n", 1244);
//	printf("hh:				[%hhx]\n", 1244);
//	ft_printf("hh:				[%hhx]\n", 1244);
//	printf("h:				[%hx]\n", 1244);
//	ft_printf("h:				[%hx]\n", 1244);
//	printf("ll:				[%llx]\n", 1244);
//	ft_printf("ll:				[%llx]\n", 1244);
//	printf("l:				[%lx]\n", 1244);
//	ft_printf("l:				[%lx]\n", 1244);
//	printf("z:				[%zx]\n", 1244);
//	ft_printf("z:				[%zx]\n", 1244);
//	printf("j:				[%jx]\n", 1244);
//	ft_printf("j:				[%jx]\n", 1244);
//	printf("jx:				[%jx]\n", -4294967296);
//	ft_printf("jx:				[%jx]\n", -4294967296);
//	printf("prec .:				[%.x]\n", 0);
//	ft_printf("prec .:				[%.x]\n", 0);
//	printf("lx:				[%lx]\n", 4294967296);
//	ft_printf("lx:				[%lx]\n", 4294967296);
//	printf("x:				[%x]\n", 0);
//	ft_printf("x:				[%x]\n", 0);
//	printf("X:				[%X]\n", 0);
//	ft_printf("X:				[%X]\n", 0);
//	printf("x:				[%x]\n", 4294967296);
//	ft_printf("x:				[%x]\n", 4294967296);
//	printf("X:				[%X]\n", 4294967296);
//	ft_printf("X:				[%X]\n", 4294967296);
//	printf("hx:				[%hx]\n", 4294967296);
//	ft_printf("hx:				[%hx]\n", 4294967296);
//	printf("hhX:				[%hhX]\n", 4294967296);
//	ft_printf("hhX:				[%hhX]\n", 4294967296);
//	printf("#x:				[%#x]\n", 0);
//	ft_printf("#x:				[%#x]\n", 0);
//	printf("#0 width 8:			[%#08x]\n", 42);
//	ft_printf("#0 width 8:			[%#08x]\n", 42);
//	printf("# prec .:			[%#.x]\n", 0);
//	ft_printf("# prec .:			[%#.x]\n", 0);
//	printf("width 5 prec .:			[%5.x]\n", 0);
//	ft_printf("width 5 prec .:			[%5.x]\n", 0);
//	printf("width 5 prec 0:			[%5.0x]\n", 0);
//	ft_printf("width 5 prec 0:			[%5.0x]\n", 0);
	printf("j:				[%jx]\n", -4294967296);
	ft_printf("j:				[%jx]\n", -4294967296);
	printf("j:				[%jx]\n", -4294967297);
	ft_printf("j:				[%jx]\n", -4294967297);
	printf("j:				[%ju]\n", 18446744073709486080);
	ft_printf("j:				[%ju]\n", 18446744073709486080);
	
	
	
	return (0);
}
