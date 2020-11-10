/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burswyck <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:03:17 by burswyck          #+#    #+#             */
/*   Updated: 2020/10/28 18:22:25 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	position;

	i = 0;
	j = 0;
	if (!*needle)
		return (char*)haystack;
	while (haystack[i++] != needle[j] && len > 0)
		len--;
	if (haystack[--i] == needle[j])
		position = i;
	while (needle[j] == haystack[i] && haystack[i] && needle[j] && len > 0)
	{
		len--;
		j++;
		i++;
	}
	if (needle[j] == '\0')
		return (char*)(haystack + position);
	return (0);
}
