#include "libft.h"

int	ft_strlcat(char *dest, const char *src, int size)
{
	unsigned int	c;
  int c_dest;
  int resultado;

  resultado = 0;
	c = 0;
  c_dest = 0;

  while(dest[c_dest] != '\0'){
    c_dest++;}
	while ((size) > 0 && src[c] != '\0')
  {
		dest[c_dest+c] = dest[c_dest+c] + src[c];
    resultado++;
    c++;
    size--;

  //  printf("%s\n",dest);
  }
	dest[c] = '\0';
	return resultado;
}