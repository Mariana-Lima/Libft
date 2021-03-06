#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	int			len;
	char			*new_str;

	c = 0;
  while(s[len] != '\0')
	  len++;
	new_str = (char *)malloc(sizeof(*s) * (len + 1));
	if (new_str == NULL || s == NULL)
		return (NULL);
	while (s[c] != '\0')
	{
		new_str[c] = (*f)(c, s[c]);
		c++;
	}
	new_str[c] = '\0';
	return (new_str);
}