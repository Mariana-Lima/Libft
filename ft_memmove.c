#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *pt_src = (char *)src;
	char *pt_dest = (char *)dest;
	char novo[n];

	size_t c = 0;
	char *temp = &novo[n];
	while (c < n)
	{
		temp[c] = pt_src[c];
		c++;
	}
	c = 0;

	while (c < n)
	{
		pt_dest[c] = temp[c];
		c++;
	}
	return ((void *)pt_dest);
}