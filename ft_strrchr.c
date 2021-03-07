/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:05:41 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 18:26:11 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*string;
	int		cont;

	string = (char *)str;
	cont = ft_strlen(str) + 1;
	while (cont >= 0)
	{
		if (string[cont] == c)
			return (&string[cont]);
		else
			cont--;
	}
	return (NULL);
}
