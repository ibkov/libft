/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burswyck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:03:17 by burswyck          #+#    #+#             */
/*   Updated: 2020/11/11 20:41:34 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	size_t			len_l;

	if (!haystack)
		ft_strlen(haystack);
	i = 0;
	len_l = ft_strlen(needle);
	while (haystack)
	{
		if (i + len_l > len)
			return (0);
		if (!(ft_strncmp(haystack, needle, len_l)))
			return (char*)(haystack);
		haystack++;
		i++;
	}
	return (0);
}
