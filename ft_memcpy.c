#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) 
{ 
   char *pt_src = (char *)src; 
   char *pt_dest = (char *)dest; 
   int c = 0;

  while (n > 0 && pt_src[c] != '\0')
  {
		pt_dest[c] = pt_src[c];
    c++;
    n--;
  }
	//pt_dest[c] = '\0';
  return ((void *)dest);
} 