/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 01:52:32 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 16:46:56 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		cs1;
	int		cs2;
	int		c;
	char	*dest;
	int		a;

	cs1 = 0;
	cs2 = 0;
	c = 0;
	a = 0;
	while (s1[cs1] != '\0')
		cs1++;
	while (s2[cs2] != '\0')
		cs2++;
	dest = (char *)malloc(sizeof(*s1) * (cs1 + cs2 + 1));
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
