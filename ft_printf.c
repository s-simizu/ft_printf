/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:10:34 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/31 05:22:48 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_str(char *conv, const char *p)
{
	size_t	len;

	if (conv == NULL)
	{
		ft_putstr_fd((char *)p, 1);
		return (ft_strlen(p));
	}
	len = conv - p;
	return (write(1, p, len));
}

char	*get_options(char *conv, bool *options)
{
	int	i;

	options[SHARP] = false;
	options[SPACE] = false;
	options[PLUS] = false;
	i = 0;
	while (ft_strchr("# +", conv[i]) != NULL)
	{
		if (conv[i] == '#')
			options[SHARP] = true;
		else if (conv[i] == ' ')
			options[SPACE] = true;
		else if (conv[i] == '+')
			options[PLUS] = true;
		i++;
	}
	return (conv + i);
}

int	print_conv(char *conv, va_list *args, const char **p)
{
	bool	options[3];

	conv = get_options(conv, options);
	*p = conv + 1;
	if (*conv == 'c')
		return (print_c(va_arg(*args, int), options));
	if (*conv == 's')
		return (print_s(va_arg(*args, char *), options));
	if (*conv == 'p')
		return (print_x((unsigned long)va_arg(*args, void *), false, true,
				options));
	if (*conv == 'd' || *conv == 'i')
		return (print_d(va_arg(*args, int), options));
	if (*conv == 'u')
		return (print_u(va_arg(*args, unsigned int), options));
	if (*conv == 'x')
		return (print_x(va_arg(*args, unsigned int), false, false, options));
	if (*conv == 'X')
		return (print_x(va_arg(*args, unsigned int), true, false, options));
	if (*conv == '%')
		return (print_per());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*p;
	char		*conv;
	int			len;

	va_start(args, str);
	len = 0;
	p = str;
	conv = ft_strchr(p, '%');
	while (conv != NULL)
	{
		len += print_str(conv, p);
		len += print_conv(conv + 1, &args, &p);
		conv = ft_strchr(p, '%');
	}
	len += print_str(conv, p);
	va_end(args);
	return (len);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// int d = 9;
// char c = 'A';
// unsigned int u = UINT32_MAX;

// printf("%d\n", ft_printf("%d is int value\n", d));
// printf("%d\n", printf("%d is int value\n", d));
// printf("%d\n", ft_printf("%c\n", c));
// printf("%d\n", printf("%c\n", c));
// printf("%d\n", ft_printf("%u\n", u));
// printf("%d\n", printf("%u\n", u));
// printf("%d\n", ft_printf("%p\n", &d));
// printf("%d\n", printf("%p\n", &d));
// printf("%d\n", ft_printf("%#x\n", u));
// printf("%d\n", printf("%#x\n", u));
// printf("%d\n", ft_printf("%X\n", u));
// printf("%d\n", printf("%X\n", u));
// printf("%d\n", ft_printf("%#X\n", u));
// printf("%d\n", printf("%#X\n", u));
// printf("%d\n", ft_printf("int: %d, char: %c, uint: %u\n", d, c, u));
// printf("%d\n", printf("int: %d, char: %c, uint: %u\n", d, c, u));
// printf("%d\n", ft_printf("%% %% %%\n"));
// printf("%d\n", printf("%% %% %%\n"));
// printf("%d\n", printf("aaaaa%saaaaa\n", NULL));
// printf("%d\n", ft_printf("aaaaa%saaaaa\n", NULL));
// }
