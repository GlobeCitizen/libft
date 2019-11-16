/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:44:52 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/15 23:51:09 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if(!(str = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	ft_memmove(str, s + start, len);
	str[len] = 0;
	return (str);
}
