/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 11:30:09 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/06 13:14:54 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (little[0] == '\0')
		return (char*)(big);
	while ((i <= len) && (big[i] != '\0'))
	{
		j = i;
		k = 0;
		while (big[j] == little[k])
		{
			k++;
			j++;
			if (little[k] == '\0')
				return (char *)(&big[i]);
		}
		i++;
	}
	return (NULL);
}
