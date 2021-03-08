/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:46:19 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/08 12:57:52 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c)
{
	char	**resultado;
	int		start;
	int		end;
	int	    i;
	int		cont;

	start = 0;
	end = 0;
	i = 0;
	cont = 0;

	while (s[i] != '\0')
	{
		while (s[i] == c || (s[i] != c && s[i] != '\0')) //enquanto for igual incrementa i,
                                            //  ou mesmo que seja diferente mas ainda não nulo
			i++;
		if (s[i] != '\0') //quando parar de ser igual, se ainda não for nulo, incrementa cont
			cont++;
	}
    i = 0;

	if ((resultado = (char **)malloc(sizeof(char *) * (cont + 1))) == NULL)
		return (0);

	while (i != cont)
	{
		while (s[start] == c) //enquanto ainda estiver dentro do delimitador
			start++;

		end = start; // para iniciar de onde parou

		while (s[end] != c && s[end] != '\0')
			end--;

		resultado[i] = ft_substr(s, start, (end - start)); // cria na posição i a string
		i++;

		start = 0;
	}
	return (resultado);
}