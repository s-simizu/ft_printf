/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:32:34 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/30 02:49:10 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_per(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	print_c(char c, bool *options)
{
	int	len;

	len = 0;
	if (options[SPACE])
	{
		ft_putchar_fd(' ', 1);
		len++;
	}
	ft_putchar_fd(c, 1);
	len++;
	return (len);
}

int	print_s(char *s, bool *options)
{
	int	len;

	len = ft_strlen(s);
	if (options[SPACE])
	{
		ft_putchar_fd(' ', 1);
		len++;
	}
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
	if (options[SPACE])
	{
		ft_putchar_fd(' ', 1);
		len++;
	}
	if (options[SIGN] && n > 0)
	{
		ft_putchar_fd('+', 1);
		len++;
	}
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
