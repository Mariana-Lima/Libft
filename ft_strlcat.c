/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 18:13:38 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	c_dest;
	unsigned int	c_src;
	int				cont1;
	int				cont2;

	c = 0;
	c_dest = ft_strlen(dest);
	c_src = ft_strlen(src);
	if (c_dest > size)
		return (c_dest + size);
	while (size > 0 && src[c] != '\0')
	{
		dest[c_dest + c] = src[c];
		c++;
		size--;
	}
	dest[c] = '\0';
	return (c_dest + c_src);
}
