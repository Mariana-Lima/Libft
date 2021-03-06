#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *string;
  char *var;

  var = 0;
	string = (char*)str;
  if(c != '\0'){
    while (*string != '\0')
    {
      if (*string == c)
      {
        var = string;
        string++;
        //return (string);
      }
      else
      {
        string++;
      }
    }
  }
	else
  {
  	return (string); 
  }
	return (var);
}