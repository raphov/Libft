
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*strmap;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	strmap = malloc(sizeof(char) * (len + 1));
	if (!strmap)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmap[i] = f(i, s[i]);
		i++;
	}
	strmap[i] = '\0';
	return (strmap);
}
