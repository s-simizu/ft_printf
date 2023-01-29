/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:04:18 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:05:30 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	if (b1 < b2)
	{
		i = 0;
		while (i < n)
		{
			b1[i] = b2[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			b1[(n - 1) - i] = b2[(n - 1) - i];
			i++;
		}
	}
	return ((void *)b1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "1234567890";
// 	char str2[] = "1234567890";

// 	ft_memmove(str1, str1 + 3, 5);
// 	ft_memmove(str2 + 3, str2, 5);

// 	printf("%s\n\n", "1234567890");
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }
