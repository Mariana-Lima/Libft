/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:04:32 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/07 03:00:56 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int nb)
{
	int			number[11];
	long int	long_number;
	int			c;

	long_number = nb;
	c = 0;
	if (long_number < 0)
	{
		long_number = (-long_number);
		write(1, "-", 1);
	}
	if (long_number == 0)
		write(1, "0", 1);
	while (long_number > 0)
	{
		number[c] = long_number % 10 + '0';
		long_number = long_number / 10;
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		write(1, &number[c], 1);
		c--;
	}
}
