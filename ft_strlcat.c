/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:06:44 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/14 13:12:09 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	c_dest;
	unsigned int	c_src;

	c_dest = ft_strlen(dest);
	c_src = ft_strlen(src);

	if(c_dest == size)
		return (size + c_src);

	if(c_src < (size-c_dest))
		ft_memcpy(dest + c_dest, src, c_src++);

	else
		ft_memcpy(dest + c_dest, src, size--);

	dest[c_dest + size - 1] = '\0';
	return (c_dest + c_src);
}

int			main(void)
{
	char	dest1[16] = "";
	char	src1[6] = "toto";

	printf("Minha função:		%ld %s %s\n", ft_strlcat(dest1, src1, 0), dest1, src1);

	unsigned int sistema = strlcat(dest1, src1, 0);

	printf("Função do sistema:  %d %s %s\n", sistema, dest1, src1);
	return (0);
}