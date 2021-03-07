/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:52:52 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 13:46:04 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				len;
	int				val;
	unsigned int	add;
	int				mult;
	int 			isneg;

	len = 0;
	add = 0;
	mult = 1;

	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	if (*str == '-')
		isneg = -1;
	if (*str == '-' || *str == '+')
		isneg = 1;
	while (str[len] != '\0' && str[len] >= '0' && str[len] <= '9')
		len++;
	len = len - 1;
	while (len >= 0)
	{
		val = str[len];
		add = add + ((val - 48) * mult);
		mult = mult * 10;
		len--;
	}
	return (add * isneg);
}
