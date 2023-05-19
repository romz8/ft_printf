/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:34:20 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/19 16:46:05 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_address(unsigned long long n);

int	ft_print_ptr(void *ptr)
{
	int	n;

	ft_putstr("0x");
	n = ft_hex_address((unsigned long long) ptr);
	return (n + 2);
}

int	size_hex_address(unsigned long long n)
{
	int	size;

	if (n < 0)
		size = 1;
	else
		size = 0;
	while (n)
	{
		size ++;
		n /= 16;
	}
	return (size);
}

int	ft_hex_address(unsigned long long n)
{
	char	*base_16;
	int		size;

	size = size_hex_address(n);
	base_16 = "0123456789abcdef";
	if (n < 16)
		ft_putchar(base_16[n]);
	else
	{
		ft_hex_address(n / 16);
		ft_hex_address(n % 16);
	}
	return (size);
}