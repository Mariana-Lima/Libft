#include "libft.h"
       
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
  size_t count;

	string = (unsigned char*)s;
  count = 0;
    while (n > count)
    {
      if (*string == c)
      {
        return (string);
      }
      else
      {
        string++;
        count++;
      }
    }
  	return (NULL); 
}
