#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int	c;
  int len;

  c = 0;  
  len = 0;

	
    while (s[len] != '\0')
		len++;
	dup = (char *)malloc(sizeof(*s) * (len + 1));
	
    if (s == NULL || dup == NULL)
		return (NULL);
	
    while (s[c] != '\0')
	{
		dup[c] = s[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}