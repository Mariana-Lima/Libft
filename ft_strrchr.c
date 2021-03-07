/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:05:41 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 02:51:36 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*string;
	char	*var;

	var = 0;
	string = (char*)str;
	if (c != '\0')
	{
		while (*string != '\0')
		{
			if (*string == c)
			{
				var = string;
				string++;
			}
			else
				string++;
		}
	}
	else
		return (string);
	return (var);
}
