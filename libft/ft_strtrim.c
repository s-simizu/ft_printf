/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 05:44:08 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 12:28:08 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(set);
	i = 0;
	while (i < len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	trim_count(char const *s, size_t len, char const *set)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (i < len)
	{
		if (!is_inset(s[i], set))
			break ;
		counter++;
		i++;
	}
	if (counter == len)
		return (counter);
	i = 0;
	while (i < len)
	{
		if (!is_inset(s[len - i - 1], set))
			break ;
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	nlen;
	size_t	slen;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	slen = ft_strlen(s1);
	nlen = slen - trim_count(s1, slen, set);
	new = ft_calloc(nlen + 1, sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		if (!is_inset(s1[i], set))
			break ;
		i++;
	}
	ft_strlcpy(new, s1 + i, nlen + 1);
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " "));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " 12"));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", " 1245"));
// 	printf("%s\n", ft_strtrim("   12 3 45   ", NULL));
// 	printf("%s\n", ft_strtrim(NULL, "123"));
// }
