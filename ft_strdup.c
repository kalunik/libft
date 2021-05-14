#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	len;

	len = ft_strlen(s1);
	buf = (char *)malloc((len + 1) * sizeof (char));
	if (buf == NULL)
		return (NULL);
	ft_strlcpy(buf, s1, len + 1);
	return (buf);
}
