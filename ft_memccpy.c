/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:48:40 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 02:45:40 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	char	*pt_src;
	char	*pt_dest;
	int		cont;

	pt_src = (char *)src;
	pt_dest = (char *)dest;
	cont = 0;
	while (n > 0 && pt_src[cont] != '\0')
	{
		if (pt_src[cont] == c)
		{
			cont++;
			return (dest);
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
