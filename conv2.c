/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:32:41 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/30 05:13:35 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_hex(long n, bool ucase)
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

int	print_x(long n, bool ucase, bool *options)
{
	int	len;

	len = 0;
	if (options[PREFIX])
	{
		if (ucase)
			ft_putstr_fd("0X", 1);
		else
			ft_putstr_fd("0x", 1);
		len += 2;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		len++;
	}
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
	{
		ft_putchar_fd(' ', 1);
		len++;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (print_digit(n));
}
