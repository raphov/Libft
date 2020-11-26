#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	char *sub;
	int len;
	int i;

	if (!s1 || !set)
		return (NULL);
	sub = (char *)s1;
	while (*sub && ft_strchr(set, *sub))
		sub++;
	len = ft_strlen(sub);
	while (ft_strchr(set, sub[len]) && len)
		len--;
	trimmed = ft_substr(sub, 0, len+1);
	return (trimmed);
}
