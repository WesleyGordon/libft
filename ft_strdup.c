/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:50:21 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/06 14:27:26 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	result = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}
