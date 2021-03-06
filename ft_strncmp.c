#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	if (n == 0 && c == n)
		return (0);
	while (s1[c] != '\0' && (s1[c] == s2[c]))
	{
		if (c + 1 == n)
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}