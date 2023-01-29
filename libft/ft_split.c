/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 06:51:07 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/23 17:22:48 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static size_t	count_strs(char const *s, char c)
{
	size_t		counter;
	char const	*p;
	char const	*prev;

	if (s[0] == '\0')
		return (0);
	if (c == '\0')
		return (1);
	counter = 1;
	p = ft_strchr(s, c);
	prev = s;
	while (p != NULL)
	{
		if (p != prev)
			counter++;
		prev = p + 1;
		p = ft_strchr(prev, c);
	}
	if (*prev == '\0')
		counter--;
	return (counter);
}

static char	*create_str(char const *src, size_t len)
{
	char	*s;

	s = ft_calloc(len + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, src, len + 1);
	return (s);
}

static int	store_strs(char **strs, size_t len, char const *src, char c)
{
	char const	*p;
	char const	*prev;
	size_t		i;

	p = ft_strchr(src, c);
	prev = src;
	i = 0;
	while (i < len)
	{
		if (p != prev)
		{
			if (p == NULL)
				p = src + ft_strlen(src);
			strs[i] = create_str(prev, p - prev);
			if (strs[i] == NULL)
				return (-1);
			i++;
		}
		prev = p + 1;
		p = ft_strchr(prev, c);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = count_strs(s, c);
	strs = ft_calloc(len + 1, sizeof(char *));
	if (strs == NULL)
		return (NULL);
	if (store_strs(strs, len, s, c) == -1)
	{
		free_all(strs);
		return (NULL);
	}
	return (strs);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**strs;

// 	strs = ft_split("a,b,c,d,e", ',');
// 	for (int i = 0; strs[i] != NULL; i++)
// 		printf("%s\n", strs[i]);
// 	printf("-----\n");
// 	strs = ft_split("  aiueo   abc 123    ", ' ');
// 	for (int i = 0; strs[i] != NULL; i++)
// 		printf("%s\n", strs[i]);
// 	printf("-----\n");
// 	strs = ft_split("     ", ' ');
// 	for (int i = 0; strs[i] != NULL; i++)
// 		printf("%s\n", strs[i]);
// 	printf("-----\n");
//     if (ft_split(NULL, ' ') == NULL)
//         printf("NULL\n");
// }
