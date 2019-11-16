/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahnich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 21:13:25 by mahnich           #+#    #+#             */
/*   Updated: 2019/11/16 00:15:49 by mahnich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			digits (int n)
{
	int count;
	count = 0;
	if (n == 0)
		return (1);
	n = (n < 0) ? -n : n;
	while (n > 0)
	{
		 n /= 10;
		 count++;
	}
	return (count);
}

char	*alloc(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		if (!(str = (char *)malloc(13)))
			return (NULL);
		str = "-2147483648";
	}
	if (n == 0)
	{
		if (!(str = (char *)malloc(2)))
			return (NULL);
		str = "0\0";
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		count;
	if (n == 0 || n == -2147483648)
		return(alloc(n));
	count = digits(n);
	neg = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	if (!(str = (char *)malloc((count + neg) * sizeof(char) + 1)))
		return (NULL);
	*str = (neg == 1) ? '-' : *str;
	while (count-- + neg > 0)
		str++;
	*str-- = '\0';
	while (n > 0)
	{
		*str = n % 10 + '0';
		str--;
		n /= 10;
	}
	return (str + (1 - neg));
}
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;

	if (!(trimmed = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
	{
		while(*set)
		{
			if (*s1 != *set)
				*trimmed++ = *s1;
			set++;
		}
		s1++;
	}
	*trimmed = 0;
	return (trimmed);
}

int main ()
{
	int n;

	n = -2147483647;
	printf("result = %s", ft_itoa(n));
}
