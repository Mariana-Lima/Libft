/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:39:37 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 15:54:43 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*v;
	int		cont_v;
	int		cont_aux;

	v = (void *)malloc(count * size);
	cont_v = 0;
	cont_aux = count * size;
	if (v == NULL)
		return (NULL);
	while (cont_aux > cont_v)
	{
		v[cont_v] = '\0';
		cont_v++;
	}
	return ((void *)v);
}
