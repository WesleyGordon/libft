/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 14:40:52 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/06 15:40:18 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	b;

	i = 0;
	str = (unsigned char *)s;
	b = (unsigned char)c;
	while (str[i] != b || i < n)
	{
		if (str[i] == b)
			return (str)
		i++;
		str++;
	}	
	return (NULL);
}