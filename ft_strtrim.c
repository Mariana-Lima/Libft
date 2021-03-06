#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	size_t	cc;
	char	*substr;

	c = 0;
	cc = 0;
	
    substr = (char *)malloc(sizeof(char) * (len + 1));
  	if (substr == NULL)
		return (NULL);  
    substr[len] = '\0';


	while (s[c] != '\0')
	{
		if (c >= start && cc < len)
		{
			substr[cc] = s[c];
			cc++;
		}
		c++;
	}

	return (substr);
}

int compare( char s1, char const *set)
{
    int c;

    c = 0;
    while(set[c] != '\0'){
        if(s1 == set[c])
            return (1);
        else
            c++;
    }
    return (0);

}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		len=0;
    int		len2=0;
   // int c = 0;
    //char *new_str;


	if (s1 == NULL || set == NULL)
		return (NULL);

	while(s1[len] != '\0' && compare(s1[len], set))
    {
        len++;
    }

    while(s1[len2] != '\0')
        len2++;

    if (len2 > 0)
        len2--;

    while(len2 > len && compare(s1[len2], set))
        len2--;

    return(ft_substr(s1, len, len2-len+1));
}