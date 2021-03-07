/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:04:46 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 18:32:28 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*new_str;

	c = 0;
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str == NULL || s == NULL)
		return (NULL);
	while (s[c] != '\0')
	{
		new_str[c] = f(c, s[c]);
		c++;
	}
	new_str[c] = '\0';
	return (new_str);
}
