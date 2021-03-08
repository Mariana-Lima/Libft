/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 21:44:49 by mmanoel-         ###   ########.fr       */
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
	if (c_dest > size)
		return (size + c_src);
	c2 = c_dest;
	while (c2 < c_dest - 1 && src[c] != '\0')
		dest[c2++] = src[c++];
	dest[c2] = '\0';
	return (c_dest + c_src);
}
