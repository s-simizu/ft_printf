/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:44:07 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/11 23:55:59 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, s1, len + 1);
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strdup("aiueo"));
// }
