/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:52:52 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/04/10 20:07:47 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	add;
	int				isneg;

	add = 0;
	isneg = 1;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' \
	|| *str == '\f' || *str == '\r' || *str == '\v'))
		str++;
	if (*str == '-')
		isneg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		add = add * 10 + (*str - '0');
		str++;
	}
	return (add * isneg);
}
