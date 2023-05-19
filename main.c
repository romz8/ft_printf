#include "./libft/libft.h"
#include <stdio.h>

int ft_printf(const char *s, ...);

int main(void)
{
	char a = 'a', b = 'b', c = 'c';
	ft_printf("FT_PRINFF We are going to test this first sentence with 3 characters %c , %c and the last one %i and we test the %% character, 303 in hex is %x and 798 in HEX is %X and -2147483648 in hex is %x and 2147483647 is %X\n", a, b, -15, 303, 798, -2147483648, 2147483647);
	ft_printf("    let's now test the unisgned int with 2147483800, 4294967280 and 4294967295: we have : %u /t %u /t and %u \n", 2147483800, 4294967280, 4294967295);

	printf("    PRINTF version : let's now test the unisgned int with 2147483800, 4294967280 and 4294967295: we have : %lu /t %lu /t and %lu \n", 2147483800, 4294967280, 4294967295);
	ft_printf("let's now test pointers for a adress : %p \n", &a);
	printf("let's now test printf pointers for a adress : %p \n", &a);
	if (printf("") == ft_printf(""))
		ft_printf("\n ok for empty printf vs ft_printf\n");
	if (printf("%c",c) == ft_printf("%c",c))
		ft_printf("\n ok for 1 char prtinf vs ft_printf\n");	
	
	ft_printf("\n ====== size comparison   =========\n");

	char *s1 = "We are going to test this first sentence with 3 characters %c , %c and the last one %i and we test the %% character, %i in hex is %x and %i in HEX is %X and %d in hex is %X and %i is %x\n";

	printf("ft_printf size : %i\n", ft_printf(s1, a, b, -150, 303, 303, 798, 798, -2147483645, -2147483645, 2147483647, 2147483647));
	printf("printf size : %i\n", printf(s1, a, b, -150, 303, 303, 798, 798, -2147483645, -2147483645, 2147483647, 2147483647));
	
}
