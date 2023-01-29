/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:14:46 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/21 14:01:02 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_digit(unsigned int abs, int fd)
{
	if (abs == 0)
		return ;
	put_digit(abs / 10, fd);
	ft_putchar_fd((abs % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	abs;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		abs = (unsigned int)-n;
	}
	else
		abs = n;
	put_digit(abs, fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(12345, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-12345, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// }
