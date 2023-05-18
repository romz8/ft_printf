/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:35:10 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/18 22:37:27 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_hex(int n)
{
	int size;

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

int	ft_hexprint(int nb, int maj)
{
	char			*base_16;
	unsigned int	n;
	int				size;

	size = size_hex(nb);
	if (maj == 0)
		base_16 = "0123456789ABCDEF";
	else
		base_16 = "0123456789abcdef";
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
		n = nb;
	if (n < 16)
		ft_putchar(base_16[n]);
	else
	{
		ft_hexprint(n / 16, maj);
		ft_hexprint(n % 16, maj) ;
	}	
	return (size);
}
