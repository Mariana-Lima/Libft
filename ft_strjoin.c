/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:52:32 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 19:29:12 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	char	*dest;
	int		a;

	c = 0;
	a = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	dest[c + 1] = '\0';
	if (dest == NULL)
		return (NULL);
	while (s1[c] != '\0')
	{
		dest[c] = s1[c];
		c++;
	}
	while (s2[a] != '\0')
	{
		dest[c] = dest[c] + s2[a];
		c++;
		a++;
	}
	return (dest);
}
