/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 10:30:09 by ecloete           #+#    #+#             */
/*   Updated: 2017/06/06 12:40:33 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*str1;

	str1 = (char*)(big);
	j = 0;
	i = 0;
	while (big[i] != '\0')
	{
		while ((little[j] == big[i]) && (little[j] != '\0'))
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return (str1);
		str1++;
		i++;
	}
	return (char*)(big);
}
