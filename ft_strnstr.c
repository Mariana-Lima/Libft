/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:21:24 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/04/10 19:40:54 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_len;

	if (*s2 == '\0')
		return ((char *)s1);
	len_len = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= len_len)
	{
		if (*s1 == *s2 && ft_strncmp((char *)s1, (char *)s2, len_len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
