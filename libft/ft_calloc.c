/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:31:25 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 12:32:13 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
//     int count = 3;
//     char *s1 = ft_calloc(count, sizeof(char));
//     char *s2 = calloc(count, sizeof(char));
//     for (int i = 0; i < count; i++)
//         printf("%d ", s1[i]);
//     printf("\n");
//     for (int i = 0; i < count; i++)
//         printf("%d ", s2[i]);
//     printf("\n");
// }
