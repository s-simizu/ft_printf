/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:47:09 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:17:11 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		b1[i] = b2[i];
		i++;
	}
	return ((void *)b1);
}
