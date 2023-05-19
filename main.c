#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int ft_printf(const char *s, ...);

//Regular text
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"

//Reset
#define reset "\e[0m"

void	test_char()
{
	ft_printf(YEL"============= TESTING CHAR ===================\n\n"reset);
    ft_printf("generating a set of char : printf in red, ft_printf in blue\n");
    int count = 0;
    int i = 0;
    int x = 0;
    int y = 0;
    while (i < 128)
    {
        x += printf("%c", i);
        y += ft_printf("%c", i);
        i++;
    }
    if (x == y)
        ft_printf(GRN "\nOK - ALL GOOD FOR CHAR\n\n"reset);
    else
        ft_printf(RED "\nTHERE ARE %i DIFFs\n\n"reset, count);
}

void	test_prct()
{
	ft_printf(YEL"============= TESTING PERCENT  ===================\n\n"reset);

    printf("\n TESTING sentence: (\"\\\"\t%%%%%%%%\")\n");
    int x = 0;
    int y = 0;
	int count = 0;
    x += printf("\"\t%%%%%%%%");
    y += ft_printf("\"\t%%%%%%%%");

    if (x == y)
        ft_printf(GRN "\nOK - ALL GOOD FOR PERCENT\n\n"reset);
    else
        ft_printf(RED "\nTHERE ARE %i DIFFs\n\n"reset, count);

}
void	test_int()
{
	ft_printf(YEL"\n\n============= TESTING INTEGER ===================\n\n"reset);

	int classic_int[5] = {42, 5687, -88888, 20008597, -78965};
	int i = 0;
	int x = 0;
	int y = 0;
	while (i < 5)
	{
		x += printf("%i\n", classic_int[i]);
		y += ft_printf("%i\n", classic_int[i]);
		i++;
	}
	if ( x == y)
		ft_printf(GRN"\n\nOK - ALL GOOD FOR BASIC INT\n\n"reset);
	else
		ft_printf(RED"\n\nFAIL -  ISSUE ON THIS TEST\n\n");

	ft_printf("\n\n------- Now testing for extreme value integer--------\n\n");
	ft_printf("\n\n------- PRINTF--------\n\n");
	x = 0;
	x += printf("\t:\t%i\n", INT_MIN);
	printf("for int min %i\n",x);
	x = 0;
	x += printf("\t:\t%i\n", INT_MAX);
	printf("for int max %i\n",x);
	x = 0;
	x += printf("\t:\t%i\n", INT_MIN + INT_MAX);
	printf("for int min + int max %i\n",x);
	x = 0;
	x += printf("\t:\t%i\n", INT_MIN - INT_MIN);
	printf("for min - min %i\n",x);
	x = 0;
	x += printf("\t:\t%i\n", INT_MAX + INT_MAX);
	printf("for max max %i\n",x);

	ft_printf("\n\n-------FT_PRINTF--------\n\n");
	y = 0;
	y += ft_printf("\t:\t%i\n", INT_MIN);
    printf("for int min %i\n",y);
	y = 0;
	y += ft_printf("\t:\t%i\n", INT_MAX);
    printf("for int max %i\n",y);
    y = 0;
	y += ft_printf("\t:\t%i\n", INT_MIN + INT_MAX);
    printf("for int min + int max %i\n",y);
    y = 0;
	y += ft_printf("\t:\t%i\n", INT_MIN - INT_MIN);
	printf("for min - min %i\n",y);
	y = 0;
    y += ft_printf("\t:\t%i\n", INT_MAX + INT_MAX);
	printf("for max max %i\n",y);
	if (x == y)
		ft_printf(GRN"\n\nOK - ALL GOOD FOR EXTREME INT\n\n"reset);
	else
		ft_printf(RED"\n\nFAIL -  ISSUE ON THIS TEST\n\n");
}
void    test_decimal()
{
    ft_printf(YEL"\n\n============= TESTING DECIMAL ===================\n\n"reset);

    int classic_int[5] = {4200, -1895687, 123456789, 20008597, -3216789};
    int i = 0;
    int x = 0;
    int y = 0;
    while (i < 5)
    {
        x += printf("%d\n", classic_int[i]);
        y += ft_printf("%d\n", classic_int[i]);
        i++;
    }
    if ( x == y)
        ft_printf(GRN"\n\nOK - ALL GOOD FOR BASIC INT\n\n"reset);
    else
        ft_printf(RED"\n\nFAIL -  ISSUE ON THIS TEST\n\n");

    ft_printf("\n\n------- Now testing for extreme value integer--------\n\n");
    ft_printf("\n\n------- PRINTF--------\n\n");
    x = 0;
    x += printf("\t:\t%d\n", INT_MIN);
    printf("for int min %d\n",x);
    x = 0;
    x += printf("\t:\t%i\n", INT_MAX);
    printf("for int max %d\n",x);
    x = 0;
    x += printf("\t:\t%d\n", INT_MIN + INT_MAX);
    printf("for int min + int max %d\n",x);
    x = 0;
    x += printf("\t:\t%d\n", INT_MIN - INT_MIN);
    printf("for min - min %d\n",x);
    x = 0;
    x += printf("\t:\t%i\n", INT_MAX + INT_MAX);
    printf("for max max %d\n",x);

    ft_printf("\n\n-------FT_PRINTF--------\n\n");
    y = 0;
    y += ft_printf("\t:\t%d\n", INT_MIN);
    printf("for int min %d\n",y);
    y = 0;
    y += ft_printf("\t:\t%d\n", INT_MAX);
    printf("for int max %d\n",y);
    y = 0;
    y += ft_printf("\t:\t%d\n", INT_MIN + INT_MAX);
    printf("for int min + int max %d\n",y);
    y = 0;
    y += ft_printf("\t:\t%d\n", INT_MIN - INT_MIN);
    printf("for min - min %d\n",y);
    y = 0;
    y += ft_printf("\t:\t%d\n", INT_MAX + INT_MAX);
    printf("for max max %d\n",y);
    if (x == y)
        ft_printf(GRN"\n\nOK - ALL GOOD FOR EXTREME INT\n\n"reset);
    else
        ft_printf(RED"\n\nFAIL -  ISSUE ON THIS TEST\n\n");
}
int main(void)
{
	test_char();
	test_prct();
	test_int();
	test_decimal();
	
	ft_printf(YEL"\n\n============= TESTING DONE !!===================\n\n"reset);
		
	/*char a = 'a', b = 'b', c = 'c';
	ft_printf("FT_PRINFF We are going to test this first sentence with 3 characters %c , %c and the last one %i and we test the %% character, 303 in hex is %x and 798 in HEX is %X and -2147483648 in hex is %x and 2147483647 is %X\n", a, b, -15, 303, 798, -2147483648, 2147483647);
	ft_printf("    let's now test the unisgned int with 2147483800, 4294967280 and 4294967295: we have : %u /t %u /t and %u \n", 2147483800, 4294967280, 4294967295);

	printf("    PRINTF version : let's now test the unisgned int with 2147483800, 4294967280 and 4294967295: we have : %lu /t %lu /t and %lu \n", 2147483800, 4294967280, 4294967295);
	ft_printf("let's now test pointers for a adress : %p \n", &a);
	printf("let's now test printf pointers for a adress : %p \n", &a);
	if (printf("") == ft_printf(""))
		ft_printf(GRN "\nok for empty printf vs ft_printf\n" reset);
	if (printf("%c",c) == ft_printf("%c",c))
		ft_printf("\n ok for 1 char prtinf vs ft_printf\n");	
	
	ft_printf("\n ====== size comparison   =========\n");

	char *s1 = "We are going to test this first sentence with 3 characters %c , %c and the last one %i and we test the %% character, %i in hex is %x and %i in HEX is %X and %d in hex is %X and %i is %x\n";

	printf("ft_printf size : %i\n", ft_printf(s1, a, b, -150, 303, 303, 798, 798, -2147483645, -2147483645, 2147483647, 2147483647));
	printf("printf size : %i\n", printf(s1, a, b, -150, 303, 303, 798, 798, -2147483645, -2147483645, 2147483647, 2147483647));
	*/
}
