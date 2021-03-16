/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/15 22:16:50 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	c2;
	unsigned int	c_dest;
	unsigned int	c_src;

	c = 0;
	c_dest = ft_strlen(dest);
	c_src = ft_strlen(src);
	if (size <= c_dest)
		return (size + c_src);
	c2 = c_dest;
	while (src[c] != '\0' && c2 != size - 1)
	{
		dest[c2] = src[c];
		c++;
		c2++;
	}
	dest[c2] = '\0';
	return (c_dest + c_src);
}
