/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:46:19 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/04/10 20:27:28 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont(char const *s, char c)
{
	int	cont3;
	int	i;

	i = 0;
	cont3 = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cont3++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cont3);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		cont1;
	int		cont2;
	int		cont3;
	int		i;

	cont1 = 0;
	cont2 = 0;
	cont3 = ft_cont(s, c);
	i = -1;
	matriz = (char **)malloc(sizeof(char *) * (cont3 + 1));
	if (!matriz)
		return (0);
	while (i++ != cont3)
	{
		while (s[cont1] == c)
			cont1++;
		cont2 = cont1;
		while (s[cont2] != '\0' && s[cont2] != c)
			cont2++;
		matriz[i] = ft_substr(s, cont1, (cont2 - cont1));
		cont1 = cont2;
	}
	matriz[i] = NULL;
	return (matriz);
}
