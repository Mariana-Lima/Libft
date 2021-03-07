/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:39:37 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 13:43:50 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*v;

	v = (void *)malloc(count * size);
	if (v == NULL)
		return (NULL);
	while (size > 0)
	{
		*v = '\0';
		v++;
		size--;
	}
	return ((void *)v);
}
