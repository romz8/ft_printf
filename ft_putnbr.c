/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:03:47 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/18 21:34:53 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	size;

	if (n < 0)
		size = 1;
	else
		size = 0;
	ft_putnbr_fd(n, 1);
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);	
}
