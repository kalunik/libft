#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	j;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	j = (unsigned char)c;
	if (d == 0 && s == 0)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (j == s[i])
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
