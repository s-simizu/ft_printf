/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 04:44:09 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/23 17:13:14 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*subs;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > (slen - start))
		len = slen - start;
	subs = ft_calloc(len + 1, sizeof(char));
	if (subs == NULL)
		return (NULL);
	ft_strlcpy(subs, &s[start], (len + 1));
	return (subs);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_substr("123456789", 6, 3));
// 	printf("%s\n", ft_substr("123456789", 7, 3));
// 	printf("%s\n", ft_substr("123456789", 8, 3));
// 	printf("%s\n", ft_substr("123456789", 9, 3));
// 	printf("%s\n", ft_substr("123456789", 4294967295, 3));
// 	printf("%s\n", ft_substr(NULL, 10, 3));
// }
