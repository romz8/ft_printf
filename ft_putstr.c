/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:54:13 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/19 19:13:26 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	size;

	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
	size = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (size);
}
