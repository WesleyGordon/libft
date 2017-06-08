/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvon-gra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 08:15:24 by wvon-gra          #+#    #+#             */
/*   Updated: 2017/06/08 08:45:49 by wvon-gra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*str;

	i = 0;
	str = strnew(ft_strlen(s));
	if (s && f)
	{
		while (s[i] != '\0')
		{
			str[i] = (*f)(i, s[i]);
}
