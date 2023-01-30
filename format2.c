/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:32:41 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/31 05:23:18 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_hex(unsigned long n, bool ucase)
{
	int	len;
	int	hex;

	if (n == 0)
		return (0);
	len = print_hex(n / 16, ucase);
	hex = n % 16;
	if (hex >= 0 && hex <= 9)
		ft_putchar_fd('0' + hex, 1);
	else if (hex >= 10 && hex <= 15)
	{
		if (ucase)
			ft_putchar_fd('A' + (hex - 10), 1);
		else
			ft_putchar_fd('a' + (hex - 10), 1);
	}
	return (len + 1);
}

int	print_x(unsigned long n, bool ucase, bool pointer, bool *options)
{
	int	len;

	len = 0;
	if (pointer || (options[SHARP] && n != 0))
	{
		if (ucase)
			len += write(1, "0X", 2);
		else
			len += write(1, "0x", 2);
	}
	if (n == 0)
		len += write(1, "0", 1);
	else
		len += print_hex(n, ucase);
	return (len);
}

int	print_digit(unsigned int abs)
{
	int	len;

	if (abs == 0)
		return (0);
	len = print_digit(abs / 10);
	ft_putchar_fd((abs % 10) + '0', 1);
	return (len + 1);
}

int	print_u(unsigned int n, bool *options)
{
	int	len;

	len = 0;
	if (options[SPACE])
		len += write(1, " ", 1);
	if (n == 0)
	{
		len += write(1, "0", 1);
		return (len);
	}
	return (len + print_digit(n));
}
