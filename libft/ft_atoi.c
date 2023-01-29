/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:08:45 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/23 16:59:47 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	calc(const char *str, int i, int neg)
{
	long	val;
	int		ofuf;

	val = 0;
	ofuf = 0;
	while (ft_isdigit(str[i]))
	{
		if (val < LONG_MIN / 10.0)
			ofuf = 1;
		val *= 10;
		val -= (str[i] - '0');
		if (val > 0 || val == LONG_MIN)
			ofuf = 1;
		i++;
	}
	if (ofuf && neg)
		return (LONG_MIN);
	if (ofuf && !neg)
		return (LONG_MAX);
	if (neg)
		return (val);
	else
		return (-val);
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\r'
		|| c == '\f');
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;

	neg = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_isdigit(str[i]))
		;
	else if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	return ((int)calc(str, i, neg));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("+2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("9223372036854775806"));
// 	printf("%d\n", ft_atoi("-9223372036854775807"));
// 	printf("%d\n", ft_atoi("++123"));
// 	printf("%d\n", ft_atoi("aiueo"));
// 	printf("%d\n", ft_atoi("     -123      "));
// 	printf("%d\n", atoi("+2147483647"));
// 	printf("%d\n", atoi("-2147483648"));
// 	printf("%d\n", atoi("9223372036854775806"));
// 	printf("%d\n", atoi("-9223372036854775807"));
// 	printf("%d\n", atoi("++123"));
// 	printf("%d\n", atoi("aiueo"));
// 	printf("%d\n", atoi("     -123      "));
// }
