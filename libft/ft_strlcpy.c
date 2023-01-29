/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:18:36 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:18:08 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char dst[10] = "000000000";
//     const char *src = "abcde";
//     const char *src2 = "123456789";
//     printf("%zu\n", ft_strlcpy(dst, src, 10));
//     printf("%s\n", dst);
//     printf("%zu\n", ft_strlcpy(dst, src2, 3));
//     printf("%s\n", dst);
// }
