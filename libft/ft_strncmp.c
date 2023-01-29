/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:06:06 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 08:42:27 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u1;
	unsigned char	*u2;
	size_t			i;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u1[i] != u2[i])
			return ((u1[i] - u2[i]));
		if (u1[i] == '\0')
			return ((u1[i] - u2[i]));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s[] = "ABC";
//     printf("%d\n", ft_strncmp("ABC", "ABD", 2));
//     printf("%d\n", ft_strncmp("ABC", "ABC", 2));
//     printf("%d\n", ft_strncmp("ABC", "AAA", 2));
//     printf("%d\n", ft_strncmp("ABC", "ABCD", 2));
//     printf("%d\n", ft_strncmp("ABC", "AB", 2));
//     printf("%d\n", ft_strncmp("ABC", "B", 2));
//     printf("%d\n", ft_strncmp("ABC", "A", 2));
// 	s[2] = -128;
//     printf("%d\n", ft_strncmp("ABC", s, 3));
// 	printf("\n");
// 	printf("%d\n", strncmp("ABC", "ABD", 2));
//     printf("%d\n", strncmp("ABC", "ABC", 2));
//     printf("%d\n", strncmp("ABC", "AAA", 2));
//     printf("%d\n", strncmp("ABC", "ABCD", 2));
//     printf("%d\n", strncmp("ABC", "AB", 2));
//     printf("%d\n", strncmp("ABC", "B", 2));
//     printf("%d\n", strncmp("ABC", "A", 2));
// 	s[2] = -128;
//     printf("%d\n", strncmp("ABC", s, 3));
//     return (0);
// }
