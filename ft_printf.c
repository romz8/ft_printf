/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:50:37 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/17 14:52:23 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h>

int	ft_count_arguments(const char *s)
{
	int	count;
	
	count = 0;
	while (*s)
	{
		if (*s == '%' && (*(s + 1) != '%' || *(s + 1) != '\0'))
			   count++;	
	}
	return (count);
}
int	ft_printf(const char *s, ...)
{

	int	i;
	va_list	arg_list;
	
	i = 0;
	va_start(arg_list, s);
	while (s[i])
	{
		while (s[i] != '%')
			i++;
		if (s[i] == '%')
		{
			if (s[i + 1] == 'c')
				ft_putchar_fd(1, va_arg(arg_list, int));
			else if (s[i + 1] == 'c')
				ft_putnbr_fd(va_arg(arg_list, int), 1);
		}
		i++;
	}
	return (i);
}
