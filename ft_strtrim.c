#include "libft.h"

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