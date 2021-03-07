/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:48:40 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 16:57:45 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char		*pt_src;
	unsigned char			*pt_dest;
	unsigned int			cont;

	pt_src = (const unsigned char *)src;
	pt_dest = (unsigned char *)dest;
	cont = 0;
	while (n > 0)
	{
		if (pt_src[cont] == c)
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
