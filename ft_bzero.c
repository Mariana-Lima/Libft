#include "libft.h"


void	ft_bzero(void *s, size_t n)
{
	char	*v;

	v = (char *)s;
	while (n > 0)
	{
		*v = '\0';
		v++;
		n--;
	}
  return ;
}