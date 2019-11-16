/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:57:30 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/15 23:21:15 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = (char *)malloc((len1 + len2) * sizeof(char) + 1)))
		return (NULL);
	ft_memmove((void *)str, (void *)s1, len1);
	ft_memmove((void *)(str + len1), (void *)s2, len2 + 1);
	return (str);
}
