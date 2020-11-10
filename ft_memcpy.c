/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burswyck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:19:16 by burswyck          #+#    #+#             */
/*   Updated: 2020/10/28 19:22:22 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *restrict dst,\
const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	if (!dst && !src)
		return (0);
	i = 0;
	d = (char*)dst;
	s = (const char*)src;
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}
