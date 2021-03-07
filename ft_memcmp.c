/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:17:21 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/06 22:59:21 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(char *str1, char *str2, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		if (str1[c] < str2[c])
			return (-1);
		else
			return (1);
		c++;
	}
	return (0);
}
