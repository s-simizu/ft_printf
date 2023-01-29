/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 07:48:39 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 08:06:58 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	size_t	len;
	size_t	i;

	cc = (char)c;
	len = ft_strlen(s);
	i = 0;
	while (i < len + 1)
	{
		if (s[len - i] == cc)
			return ((char *)(s + len - i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("123453ab", '1'));
// 	printf("%s\n", ft_strrchr("123453ab", '3'));
// 	printf("%s\n", ft_strrchr("123453ab", '3' + 256));
// 	printf("%s\n", ft_strrchr("123453ab", '\0'));
// 	printf("%s\n", ft_strrchr("123453ab", 'c'));
// 	printf("%s\n", strrchr("123453ab", '1'));
// 	printf("%s\n", strrchr("123453ab", '3'));
// 	printf("%s\n", strrchr("123453ab", '3' + 256));
// 	printf("%s\n", strrchr("123453ab", '\0'));
// 	printf("%s\n", strrchr("123453ab", 'c'));
// }
