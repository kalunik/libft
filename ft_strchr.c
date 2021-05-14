#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_new;
	char	c_new;

	s_new = (char *)s;
	c_new = (char)c;
	while (*s_new || c_new == '\0')
	{
		if (*s_new == c_new)
			return (s_new);
		s_new++;
	}
	return (NULL);
}
