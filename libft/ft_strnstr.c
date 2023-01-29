/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:26:57 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 09:26:22 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(const char *substr, const char *needle, int nlen)
{
	int	i;

	i = 0;
	while (i < nlen)
	{
		if (substr[i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;
	size_t	i;

	if (haystack == NULL && len == 0)
		return (NULL);
	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	if (len < nlen || hlen < nlen)
		return (NULL);
	if (len > hlen)
		len = hlen;
	i = 0;
	while (i < len - nlen + 1)
	{
		if (found(haystack + i, needle, nlen))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("123456789", "789", 9));
// 	printf("%s\n", ft_strnstr("123456789", "234", 5));
// 	printf("%s\n", ft_strnstr("123456789", "345", 5));
// 	printf("%s\n", ft_strnstr("123456789", "abc", 5));
// 	printf("%s\n", ft_strnstr("", "hello", 5));
// 	printf("%s\n", ft_strnstr(NULL, "1", 0));
// 	printf("%s\n", strnstr("123456789", "789", 9));
// 	printf("%s\n", strnstr("123456789", "234", 5));
// 	printf("%s\n", strnstr("123456789", "345", 5));
// 	printf("%s\n", strnstr("123456789", "abc", 5));
// 	printf("%s\n", strnstr("", "hello", 5));
// 	printf("%s\n", strnstr(NULL, "1", 0));
// }
