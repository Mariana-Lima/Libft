/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:15:50 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/06 20:34:58 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pt_src;
	char	*pt_dest;
	char	novo[n];
	char	*temp;
	size_t	c;

	pt_src = (char *)src;
	pt_dest = (char *)dest;
	temp = &novo[n];
	c = 0;
	while (c < n)
	{
		temp[c] = pt_src[c];
		c++;
	}
	c = 0;
	while (c < n)
	{
		pt_dest[c] = temp[c];
		c++;
	}
	return ((void *)pt_dest);
}
