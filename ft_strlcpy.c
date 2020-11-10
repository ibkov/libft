/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burswyck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:19:16 by burswyck          #+#    #+#             */
/*   Updated: 2020/11/06 21:31:31 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *restrict dst,\
const char *restrict src, size_t dstsize)
{
	size_t	len;

	if (!dst && !src)
		return (0);
	len = (size_t)ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src && dstsize > 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
