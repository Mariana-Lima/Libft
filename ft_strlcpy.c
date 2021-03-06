#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, int size)
{
	unsigned int	c;
  int resultado;

  resultado = 0;
	c = 0;
	while (size > 0 && src[c] != '\0')
  {
		dest[c] = src[c];
    resultado++;
    c++;
    size--;
  }
	dest[c] = '\0';
	return resultado;
}