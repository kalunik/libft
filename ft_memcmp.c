#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = ((unsigned char *)s1)[i];
		c2 = ((unsigned char *)s2)[i];
		if (c1 == c2)
			i++;
		else
			return (c1 - c2);
	}
	return (0);
}
