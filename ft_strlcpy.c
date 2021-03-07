/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:30:05 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 17:17:16 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlcpy(char *dest, const char *src, int size)
{
	unsigned int	c;
	int				resultado;
	int				src_len;

	resultado = 0;
	c = 0;
	src_len = ft_strlen(src);
	if (dest == NULL)
		return (0);
	while (size > 0 && src[c] != '\0')
	{
		dest[c] = src[c];
		resultado++;
		c++;
		size--;
	}
	dest[c] = '\0';
	return (resultado);
}
