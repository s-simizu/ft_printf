/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:26:20 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/23 17:26:17 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapped;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	mapped = ft_calloc(len + 1, sizeof(char));
	if (mapped == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	return (mapped);
}

// #include <stdio.h>
// char	test(unsigned int i, char c)
// {
// 	if (i > 4)
// 	{
// 		if (ft_isalpha(c))
// 			return ('1');
// 		else
// 			return ('0');
// 	}
// 	return (c);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("aiueo12345aiueo", test));
// }
