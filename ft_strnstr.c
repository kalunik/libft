#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (!n[i])
		return (h);
	while (len > i && h[i])
	{
		j = 0;
		if (h[i] == n[j])
		{
			while (len > (i + j) && h[i + j] == n[j])
			{
				j++;
				if (!n[j])
					return (h + i);
			}
		}
		i++;
	}
	return (0);
}
