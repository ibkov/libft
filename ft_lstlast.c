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

t_list  *ft_lstlast(t_list *lst)
{
	t_list *last_lst;

	last_lst = lst;
	if (!lst)
		return (0);
	while (lst->next)
	{
		last_lst = lst;
		lst = lst->next;
	}
	if (!lst->next)
		return (lst);
	return (last_lst);

}
