/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 00:01:35 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/16 00:58:03 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in(const char c, const char *set)
{
	while(*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
int		len_trimmed(const char *s, const char *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (is_in(s[i], set))
		i++;
	while (is_in(s[ft_strlen(s) - j], set))
		j++;
	return (ft_strlen(s) - (i + j));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int len;

	len = ft_strlen(s1) - len_trimmed(s1, set);
	if (!(trimmed = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (is_in(*s1, set))
		s1++;
	ft_memmove(trimmed, s1, len);
	trimmed[len] = 0;
	return (trimmed);
}
