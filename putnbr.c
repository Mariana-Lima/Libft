/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:04:32 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/06 12:23:22 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
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

#include <unistd.h>

void    ft_putnbr(int nb);

int        main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);

	    ft_putnbr(42);
    write(1, "\n", 1);

	    ft_putnbr(-42);
    write(1, "\n", 1);
}
