#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *tmps;
	char *tmpd;

	i = 0;
	tmps = (char *)src;
	tmpd = (char *)dest;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return(dest);
}
