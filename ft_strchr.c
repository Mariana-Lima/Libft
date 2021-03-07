/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:01:17 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 16:39:59 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	*string;
	int		str_len;
	int		cont;

	string = (char *)str;
	str_len = ft_strlen(str);
	cont = 0;
	while (cont <= str_len)
	{
		if (string[cont] == c)
			return (&string[cont]);
		else
			cont++;
	}
	return (NULL);
}
