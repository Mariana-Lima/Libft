/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:25:30 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/13 17:34:10 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char s1, char const *set)
{
	int		c;

	c = 0;
	while (set[c] != '\0')
	{
		if (s1 == set[c])
			return (1);
		else
			c++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		len2;

	len = 0;
	len2 = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[len] != '\0' && compare(s1[len], set))
		len++;
	while (s1[len2] != '\0')
		len2++;
	if (len2 > 0)
		len2--;
	while (len2 > len && compare(s1[len2], set))
		len2--;
	return (ft_substr(s1, len, len2 - len + 1));
}
