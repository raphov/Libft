#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i;
	char * sub;

	i = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub || !s)
		return (NULL);
	if ((size_t)ft_strlen((char *)s) <= start)
		return (sub);
	while (i < len && s[i+start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
