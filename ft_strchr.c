/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:01:17 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 11:24:51 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char	*string;

	string = (char*)str;
	if ((*str == '\0') || (c == 0))
		return (NULL);
	while (*string != '\0')
	{
		if (*string == c)
			return (string);
		else
			string++;
	}
	return (0);
}
