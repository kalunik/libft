#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	j0;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		j = dstsize;
	else
		j = ft_strlen(dst);
	j0 = j;
	len = j0 + ft_strlen(src);
	if (dstsize == j0)
		return (len);
	while (i < dstsize - j0 - 1 && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len);
}
