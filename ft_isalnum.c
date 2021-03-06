#include "libft.h"

int	ft_str_is_numeric(char *str)
{
	int numero;

	numero = 0;
	if (*str > 0)
	{
		while (*str != '\0')
		{
			if (*str >= '0' && *str <= '9')
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