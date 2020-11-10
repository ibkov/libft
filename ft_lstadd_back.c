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

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return;
	}
	if (!new)
		return;
	ft_lstlast(*lst)->next = new;
	new->next = 0;
}