/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:50:37 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/19 16:50:07 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_type(char c, va_list arg_list)
{
	int	n;

	if (c == 'c')
		n = ft_putchar(va_arg(arg_list, int));
	else if (c == 's')
		n = ft_putstr(va_arg(arg_list, char *));
	else if (c == 'i' || c == 'd')
		n = ft_putnbr(va_arg(arg_list, int));
	else if (c == '%')
		n = ft_putchar('%');
	else if (c == 'x')
		n = ft_hexprint(va_arg(arg_list, int), 1);
	else if (c == 'X')
		n = ft_hexprint(va_arg(arg_list, int), 0);
	else if (c == 'u')
		n = ft_print_ui(va_arg(arg_list, unsigned int));
	else if (c == 'p')
		n = ft_print_ptr(va_arg(arg_list, void *));
	else
		n = 0;
	return (n);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg_list;

	i = 0;
	count = 0;
	va_start(arg_list, s);
	while (s[i])
	{
		while (s[i] != '%' && s[i])
		{
			i += ft_putchar(s[i]);
			count++;
		}
		if (s[i] == '%' && s[i + 1])
		{
			count += ft_parse_type(s[i + 1], arg_list);
			i += 2;
		}
	}
	va_end(arg_list);
	return (count);
}
