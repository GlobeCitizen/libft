/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 03:43:01 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/14 08:55:15 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!ft_strlen(haystack))
		return (NULL);
	if ((len - ft_strlen(needle)) <= 0 && ft_strlen(needle) != 0 &&
		ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
		return (NULL);
	while (*haystack && --len)
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
