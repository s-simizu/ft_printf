/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 02:55:47 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:17:23 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cb;
	size_t			i;

	cb = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		cb[i] = c;
		i++;
	}
	return ((void *)cb);
}
