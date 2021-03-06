#include "libft.h"

int ft_atoi(const char *str)
{
  int len;
  int val;
  unsigned int add;
  int mult;

  len = 0;
  add = 0;
  mult = 1;
  while(str[len] != '\0')
    len++;
  len = len - 1;
  while(len >= 0)
  {
    val = str[len];
    add = add + ((val - 48) * mult);
    mult = mult * 10;
    len--;
  }
  return(add);
}