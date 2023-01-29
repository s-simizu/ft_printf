/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:27:21 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 08:04:42 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	int		i;

	cc = (char)c;
	if (cc == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("%s\n", ft_strchr("123453ab", '3'));
//     printf("%s\n", ft_strchr("123453ab", '3' + 256));
//     printf("%s\n", ft_strchr("123453ab", '\0'));
// 	printf("%s\n", ft_strchr("123453ab", '3'));
//     printf("%s\n", ft_strchr("123453ab", '3' + 256));
//     printf("%s\n", ft_strchr("123453ab", '\0'));
// }
