#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	cs1;
  int	cs2;
  int	c;
  char *dest;

	cs1 = 0;
  cs2 = 0;
  c   = 0;
  int a = 0;
  while(s1[cs1] != '\0')
    cs1++;
  while(s2[cs2] != '\0')
    cs2++;
  dest = (char *)malloc(sizeof(*s1) * (cs1 + cs2 + 1));
  if (dest == NULL)
		return (NULL);

	while (s1[c] != '\0')
  {
		dest[c] = s1[c];
    c++;
  }
  
	while (s2[a] != '\0')
  {
		dest[c] = dest[c] + s2[a];
    c++;
    a++;
  }
	dest[c] = '\0';
	return (dest);
}