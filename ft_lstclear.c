/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 02:23:39 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/29 03:57:48 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst || !del)
		return ;
	del((*lst)->content);
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next), del);
	free((*lst));
	*lst = NULL;
}
