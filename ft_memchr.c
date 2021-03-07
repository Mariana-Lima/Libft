/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:44:10 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 17:00:03 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	const char	*string;
	size_t			count;

	string = (const char *)s;
	count = 0;
	while (n > count)
	{
		if (*string == c)
			return ((void *)string);
		else
		{
			string++;
			count++;
		}
	}
	return (NULL);
}
