#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*con;
	char	*conptr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	con = (char *)malloc((len + 1) * sizeof(char));
	if (!con)
		return (NULL);
	conptr = con;
	while (*s1)
	{
		*con = *s1;
		s1++;
		con++;
	}
	while (*s2)
	{
		*con = *s2;
		s2++;
		con++;
	}
	*con = '\0';
	return (conptr);
}
