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

int     ft_lstsize(t_list *lst)
{
	int count;
	t_list *temp;

	temp = lst;
	count = 0;
	if (!temp)
		return (0);
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		count++;
	return (count);
}