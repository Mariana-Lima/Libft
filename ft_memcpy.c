/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:47:36 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 11:24:44 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pt_src;
	unsigned char	*pt_dest;
	size_t			c;

	pt_src = (unsigned char *)src;
	pt_dest = (unsigned char *)dest;
	c = 0;
	while (n > 0)
	{
		pt_dest[c] = pt_src[c];
		c++;
		n--;
	}
	return (dest);
}
