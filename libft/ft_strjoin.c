/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 05:21:10 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/12 07:58:55 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	len;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	len = s1len + s2len;
	s = ft_calloc(len + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_strlcat(s, s1, len + 1);
	ft_strlcat(s, s2, len + 1);
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("aiueo", "12345"));
// 	printf("%s\n", ft_strjoin("aiueo", ""));
// 	printf("%s\n", ft_strjoin("", "12345"));
// 	printf("%s\n", ft_strjoin(NULL, "12345"));
// }
