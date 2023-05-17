#include "./libft/libft.h"
#include <stdio.h>

int ft_printf(const char *s, ...);

int main(void)
{
	char a = 'a', b = 'b', c = 'c';
	ft_printf("We are going to test this first sentence with 3 characters %c , %c and the last one %c", a, b, c);
	printf("We are going to test this first sentence with 3 characters %c , %c and the last one %c", a, b, c);
	printf("%i", ft_printf("We are going to test this first sentence with 3 characters %c , %c and the last one %c", a, b, c));
}
