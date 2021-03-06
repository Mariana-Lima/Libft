#include "libft.h"

int ft_memcmp(char *str1, char *str2, int n)
{
    int c;

    c = 0;

    while (c < n)
    {
      if(str1[c] < str2[c])
        return -1;
      else
        if(str1[c] > str2[c])
          return 1;
      c++;
    }
    return 0;
}