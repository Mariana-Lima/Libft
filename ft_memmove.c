/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:15:50 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/04/10 20:29:07 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pt_src;
	char	*pt_dest;
	size_t	c;

	pt_src = (char *)src;
	pt_dest = (char *)dest;
	if (pt_dest == NULL && pt_src == NULL)
		return (NULL);
	if (pt_dest > pt_src)
	{
		c = n;
		while (c-- >= 0)
		{
			pt_dest[c - 1] = pt_src[c - 1];
		}
	}
	else
	{
		while (c < n)
		{
			pt_dest[c] = pt_src[c];
			c++;
		}
	}
	return (dest);
}
