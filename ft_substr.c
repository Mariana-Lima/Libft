#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	size_t	cc;
	char	*substr;

	c = 0;
	cc = 0;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (substr == NULL)
		return (NULL);

	while (s[c] != '\0')
	{
		if (c >= start && cc < len)
		{
			substr[cc] = s[c];
			cc++;
		}
		c++;
	}
	substr[cc] = '\0';
	return (substr);
}