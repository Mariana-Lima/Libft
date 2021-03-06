#include "libft.h"

int	ft_isprint(char *str)
{
	int numero;

	numero = 0;
	if (*str > 0)
	{
		while (*str != '\0')
		{
			if (*str >= 32 && *str <= 126)
				numero = 1;
			else
				return (0);
			str++;
		}
	}
	else
	{
		return (1);
	}
	return (numero);
}
