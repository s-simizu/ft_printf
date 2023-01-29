/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:43:49 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/15 04:13:00 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		sc[i] = 0;
		i++;
	}
}
