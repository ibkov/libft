/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burswyck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:11:11 by burswyck          #+#    #+#             */
/*   Updated: 2020/11/08 15:11:59 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return;
	while(lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	if (!lst->next)
		f(lst->content);
}