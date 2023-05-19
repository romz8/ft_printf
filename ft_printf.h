/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:12:41 by rjobert           #+#    #+#             */
/*   Updated: 2023/05/19 17:00:22 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int x);
int	ft_hexprint(int nb, int maj);
int	ft_print_ui(unsigned int n);
int	ft_print_ptr(void *ptr);

#endif
