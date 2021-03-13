/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:48:40 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/13 14:52:59 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pt_src;
	unsigned char	*pt_dest;
	unsigned char	c_c;
	unsigned int	cont;

	pt_src = (const unsigned char *)src;
	pt_dest = (unsigned char *)dest;
	c_c = (unsigned char)c;
	cont = 0;
	while (n > 0)
	{
		if (pt_src[cont] == c_c)
		{
			pt_dest[cont] = pt_src[cont];
			return (pt_dest + cont + 1);
		}
		else
		{
			pt_dest[cont] = pt_src[cont];
			cont++;
			n--;
		}
	}
	return (NULL);
}
