/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:17:21 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 14:58:29 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;
	unsigned char	*str_1;
	unsigned char	*str_2;

	c = 0;
	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (c < n)
	{
		if (str_1[c] != str_2[c])
			return (str_1[c] - str_2[c]);
			break ;
		c++;
	}
	return (0);
}
