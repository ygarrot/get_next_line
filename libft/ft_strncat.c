/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:28:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/01/08 10:24:24 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	i2;

	i2 = 0;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (dest[i])
		i++;
	while (src[i2] && i2 < n)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
