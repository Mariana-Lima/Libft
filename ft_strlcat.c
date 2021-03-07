/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 03:22:40 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	int				c_dest;
	int				resultado;

	resultado = 0;
	c = 0;
	c_dest = 0;
	if (c_dest > 0)
	{
		while (dest[c_dest] != '\0')
			c_dest++;
	}
	else
		return (0);
	while ((size) > 0 && src[c] != '\0')
	{
		dest[c_dest + c] = dest[c_dest + c] + src[c];
		resultado++;
		c++;
		size--;
	}
	dest[c] = '\0';
	return (resultado);
}
