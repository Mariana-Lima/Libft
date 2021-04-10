/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:18:50 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/04/10 20:05:02 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		c;
	int		len;

	c = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dup = (char *)malloc(sizeof(*s) * (len + 1));
	if (s == NULL || dup == NULL)
		return (NULL);
	while (s[c] != '\0')
	{
		dup[c] = s[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}
