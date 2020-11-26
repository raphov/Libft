#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


static size_t wordcounter(char *str, char stopchar)
{
    size_t i;
    i = 0;
    while (*str != '\0')
    {
        while (*str == stopchar && *str != '\0')
            str++;
        while (*str != stopchar && *str != '\0')
            str++;
        i++;
        if (*str == '\0' && *(str - 1) == stopchar)
          i--;
    }
    return (i);
}

static size_t counter(char *str, size_t start, char stopchar)
{
    while (str[start] != '\0' && str[start] != stopchar)
        start++;
    return start;

}



char    **ft_split(char const *s1, char c)
{
    size_t i;
    size_t j;
    char  **cpy;
    char *s;
    s = (char *)s1;

    cpy = (char**)malloc(50 * sizeof(char));
  
    if(!cpy)
        return(NULL);
    i = 0;
    j = 0;
    size_t k =0;
    while (s[k] != '\0' && i < wordcounter((char *)s1, c))
    {
        while (s[k] == c && s[k] != '\0')
            k++;
        while (s[k] != c && s[k] != '\0')
        {
            cpy[i][j++] = s[k];
            k++;
        }
        i++;
        j = 0;
    }
	return (cpy);
}



void main()
{       

    char **arr;
    arr = malloc (100);
 arr = ft_split("   barlus  apo jan a     es inch ka e    " , ' ');
// printf("%s ", "qaqs utes");
//     for(int i = 0; i < 3; i++) {
//     for(int j = 0; j < 3; j++) {
//         printf("%d ", arr[i][j]);
//     }
// } 
}