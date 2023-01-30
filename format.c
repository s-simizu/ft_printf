/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:32:34 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/31 05:23:02 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_per(void)
{
	return (write(1, "%", 1));
}

int	print_c(char c, bool *options)
{
	int	len;

	len = 0;
	if (options[SPACE])
		len += write(1, " ", 1);
	len += write(1, &c, 1);
	return (len);
}

int	print_s(char *s, bool *options)
{
	int	len;

	if (s == NULL)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	if (options[SPACE])
		len += write(1, " ", 1);
	ft_putstr_fd(s, 1);
	return (len);
}

int	print_d(int n, bool *options)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	if (s == NULL)
		return (0);
	len = ft_strlen(s);
	if (options[SPACE] && n >= 0)
		len += write(1, " ", 1);
	if (options[PLUS] && n >= 0)
		len += write(1, "+", 1);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
