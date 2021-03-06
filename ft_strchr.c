#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	char	*string;

	string = (char*)str;
  if(c != '\0'){
    while (*string != '\0')
    {
      if (*string == c)
      {
        return (string);
      }
      else
      {
        string++;
      }
    }
  }
	else
  {
  	return (NULL); 
  }
	return (0);
}