/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 13:07:50 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	c_dest;
	unsigned int	c_src;
	unsigned int	resultado;

	resultado = 0;
	c = 0;
	c_dest = 0;

	while (dest[c_dest] != '\0')
		c_dest++;
	while (src[c_src] != '\0')
		c_src++;
	if (c_dest > size)
		return(c_dest + size);

	while (size > 0 && src[c] != '\0')
	{
		dest[c_dest + c] = dest[c_dest + c] + src[c];
		resultado++;
		c++;
		size--;
	}
	dest[c] = '\0';
	return (c_dest + c_src);
}
