/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:30:28 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/06 12:21:46 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str1;
	int		i;

	str1 = (char *)s;
	i = 0;
	while (str1[i] != '\0')
	{
		i++;
		str1++;
	}
	while (i >= 0)
	{
		if (*str1 == c)
		{
			str1++;
			return (str1);
		}
		i--;
		str1--;
	}
	return (NULL);
}
