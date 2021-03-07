/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:44:10 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/06 22:47:06 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			count;

	string = (unsigned char*)s;
	count = 0;
	while (n > count)
	{
		if (*string == c)
			return (string);
		else
		{
			string++;
			count++;
		}
	}
	return (NULL);
}
