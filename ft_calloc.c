#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	//void	*ptr;
	char	*v;

	//v = (char *)ptr;
	v = (char *)malloc(count * size);
	if (v == NULL)
		return (NULL);
	
	while (size > 0)
	{
		*v = '\0';
		v++;
		size--;
	}
  //return ;
	return ((void *)v);
}