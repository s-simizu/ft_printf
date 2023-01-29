/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:57:26 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/23 17:30:51 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	test(unsigned int i, char *c)
// {
// 	if (i > 4)
// 	{
// 		if (ft_isalpha(*c))
// 			*c = '1';
// 		else
// 			*c = '0';
// 	}
// }

// int	main(void)
// {
// 	char s[] = "aiueo12345aiueo";

// 	ft_striteri(s, test);
//     printf("%s\n", s);
// }
