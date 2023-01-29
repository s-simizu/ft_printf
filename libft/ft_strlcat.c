/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 06:16:06 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/20 13:11:54 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	ret;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	if (dlen < dstsize)
		ret = dlen + ft_strlen(src);
	else
		ret = dstsize + ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	if (dlen < dstsize)
		ft_strlcpy(dst + dlen, src, dstsize - dlen);
	return (ret);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dst[15] = "0000";
//     printf("%zu\n", ft_strlcat(dst, "abc", 7));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcat(dst, "123456789", 10));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcat(dst, "123456789", 0));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcat(NULL, "123456789", 0));
// 	char dst1[15] = "0000";
//     printf("%zu\n", strlcat(dst1, "abc", 7));
//     printf("%s\n", dst1);
//     printf("%zu\n", strlcat(dst1, "123456789", 10));
//     printf("%s\n", dst1);
//     printf("%zu\n", strlcat(dst1, "123456789", 0));
//     printf("%s\n", dst1);
//     printf("%zu\n", strlcat(NULL, "123456789", 0));
// }
