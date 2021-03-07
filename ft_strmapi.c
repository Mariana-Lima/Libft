/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 02:04:46 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 17:33:20 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	int				len;
	char			*new_str;

	c = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL || s == NULL)
		return (NULL);
	new_str[c + 1] = '\0';
	while (s[c] != '\0')
	{
		new_str[c] = f(c, s[c]);
		c++;
	}
	return (new_str);
}
