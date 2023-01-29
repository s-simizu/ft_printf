/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 02:53:56 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/16 01:41:06 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	delall(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	delall(lst->next, del);
	ft_lstdelone(lst, del);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	delall(*lst, del);
	*lst = NULL;
}
