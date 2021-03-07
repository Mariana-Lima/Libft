/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:47:36 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 03:14:54 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pt_src;
	char	*pt_dest;
	int		c;

	pt_src = (char *)src;
	pt_dest = (char *)dest;
	c = n;
	if (c > 0 && pt_dest == NULL && pt_src == NULL)
		return (dest);
	while (n > 0 && pt_src[c] != '\0')
	{
		pt_dest[c] = pt_src[c];
		c++;
		n--;
	}
	pt_dest[c] = '\0';
	return ((void *)dest);
}
