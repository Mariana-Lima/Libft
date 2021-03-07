/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanoel- <mmanoel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:20:20 by mmanoel-          #+#    #+#             */
/*   Updated: 2021/03/06 20:45:59 by mmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_len(long num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		len++;
	while ((num / 10) != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;
	size_t	i;

	num = n;
	len = itoa_len(num);
	if ((str = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
		i++;
	}
	while ((num / 10) > 0 && len > i)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	str[i] = (num % 10) + '0';
	return (str);
}
